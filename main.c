#include "c_stdio.h"

int main()
{
    char buffer[MAXBUFFER];

    //-- %s
    c_sprintf(buffer , "%s", "Hello world!\n");
    printf(buffer);

    //-- %c  -->> FAILED
    //c_sprintf(buffer , "%c\n", 'H');
    //printf(buffer);

    //-- %d
    c_sprintf(buffer , "%d\n", 123);
    printf(buffer);

    //-- %lu
    c_sprintf(buffer , "%lu\n", 123456789101112);
    printf(buffer);

    //-- %f
    c_sprintf(buffer , "%f\n",123456789.101112);
    printf(buffer);

    //-- %.*f
    c_sprintf(buffer , "%-.*f\n", 3,123456789.101112);
    printf(buffer);
    return 0;
}
