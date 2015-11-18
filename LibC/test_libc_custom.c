
#include "c_stdio.h"

void TEST_LibC_Custom(void)
{
    //-- %s
    c_printf("%s", "Hello world!\n");

    //-- %c
    c_printf("%c\n", 'H');

    //-- %d
    c_printf("%d\n", 123);

    //-- %llu
    c_printf("%llu\n", 101112123456789);

    //-- %f
    c_printf( "%f\n",123456789.101112);
    c_printf( "%f\n",2.24);

    //-- %.*f
    c_printf( "%-.*f\n", 3,123456789.101112);
}
