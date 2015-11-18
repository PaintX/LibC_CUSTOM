/**
 ******************************************************************************
 * @file      semihosting.c
 * @author    Coocox
 * @version   V1.0
 * @date      09/10/2011
 * @brief     Semihosting LowLayer GetChar/SendChar Implement.
 *
 *******************************************************************************
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

#include "semihosting.h"

#define BUF_SIZE  64

static char    _Buf[BUF_SIZE + 1];
static UINT8   _BufPos = 0;

/**************************************************************************//**
 * @brief  Transmit a char on semihosting mode.
 *
 * @param  ch is the char that to send.
 *
 * @return Character to write.
 *****************************************************************************/
void SH_SendChar(int ch)
{
   _Buf[_BufPos++] = ch;
	if (_BufPos == BUF_SIZE || ch == '\n' || ch == '\0')
	{
		SH_DoCommand(0x04, (int)_Buf, NULL); // Send the char
	   _BufPos = 0;
      memset(_Buf, '\0', sizeof(_Buf));
	}
}

/**************************************************************************//**
 * @brief  Transmit a null-terminated string on semihosting mode.
 *
 * @param  str is the string that to send.
 *
 * @return Character to write.
 *****************************************************************************/
void SH_SendString(const char *str)
{
	SH_DoCommand(0x04, (int)str, NULL);
}

/**************************************************************************//**
 * @brief  Read a char on semihosting mode.
 *
 * @param  None.
 *
 * @return Character that have read.
 *****************************************************************************/
char SH_GetChar(void)
{
	int nRet = 0;

	while (SH_DoCommand(0x101, 0, &nRet) != 0)
	{
		if (nRet != 0)
		{
			SH_DoCommand(0x07, 0, &nRet);
			break;
		}
	}

   return (char)nRet;
}

