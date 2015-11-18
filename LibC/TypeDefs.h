//=============================================================================
//
// PROJET       :
// HEADER       : TypeDefs.h
//
//=============================================================================
#ifndef _TYPE_DEFS_H_
#define _TYPE_DEFS_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

//-----------------------------------------------------------------------------
// Constantes : defines
//-----------------------------------------------------------------------------

//--- Max sizes
#define  MAX_CHARS_STRING    		30
#define	MAX_CHARS_SVAL_STRING	41
#define	MAX_CHARS_ADDR_STRING	MAX_CHARS_SVAL_STRING

//-----------------------------------------------------------------------------
// Types
//-----------------------------------------------------------------------------
typedef enum //--- BOOL
{
   FALSE = 0,
   TRUE
} BOOL; // Undefined size

typedef int				         INT;
typedef unsigned int	         UINT;
typedef unsigned char		   BYTE;				// 8-bit unsigned
typedef unsigned short int	   WORD;				// 16-bit unsigned
typedef unsigned long		   DWORD;			// 32-bit unsigned
typedef signed char			   CHAR;				// 8-bit signed
typedef signed short int	   SHORT;			// 16-bit signed
typedef signed long			   LONG;				// 32-bit signed

typedef char                  CHAR8;
typedef CHAR8*		            STRING;
typedef unsigned char         STRING_TAB[MAX_CHARS_STRING];
typedef CHAR8                 LOCAL_STRING[MAX_CHARS_SVAL_STRING];

typedef char                  STRING_ADDR[MAX_CHARS_ADDR_STRING];
typedef char                  STRING_LIGNE[MAX_CHARS_STRING]; // utilisé dans le programme de tests

typedef const unsigned char   *IMAGE;
typedef const unsigned char   *SOUND;

typedef signed char           INT8;
typedef signed short int      INT16;
typedef signed long int       INT32;
typedef signed long long      INT64;

typedef unsigned char         UINT8;
typedef unsigned short int    UINT16;

typedef struct
{
   UINT16 lsb;
   UINT8  msb;
} UINT24;

typedef unsigned long int     UINT32;
typedef unsigned long long    UINT64;

typedef float                 FLOAT32;
typedef long double           FLOAT64;

typedef size_t                SIZE_T;
typedef signed short int	   UINT_RECT;

typedef union //--- u_UINT8
{
   struct
   {
      unsigned char b0:1;
      unsigned char b1:1;
      unsigned char b2:1;
      unsigned char b3:1;
      unsigned char b4:1;
      unsigned char b5:1;
      unsigned char b6:1;
      unsigned char b7:1;
   } bits;
   UINT8  val;
} u_UINT8;

typedef union //--- u_UINT16
{
   UINT8  tab[sizeof(UINT16)];
   UINT16 val;
   struct
   {
      unsigned char b0:1;
      unsigned char b1:1;
      unsigned char b2:1;
      unsigned char b3:1;
      unsigned char b4:1;
      unsigned char b5:1;
      unsigned char b6:1;
      unsigned char b7:1;
      unsigned char b8:1;
      unsigned char b9:1;
      unsigned char b10:1;
      unsigned char b11:1;
      unsigned char b12:1;
      unsigned char b13:1;
      unsigned char b14:1;
      unsigned char b15:1;
   } bits;
} u_UINT16;

typedef union //--- u_UINT32
{
   UINT8  tab[sizeof(UINT32)];
   UINT32 val;
} u_UINT32;

typedef union //--- u_UINT64
{
   UINT8  tab[sizeof(UINT64)];
   UINT64 val;
} u_UINT64;

typedef union //--- u_FLOAT32
{
   UINT8   tab[sizeof(FLOAT32)];
   UINT32  valU32;
   INT32   valS32;
   FLOAT32 val;
} u_FLOAT32;

typedef  unsigned long long   u_quad_t;
typedef  long long            quad_t;


#endif //_TYPE_DEFS_H_
