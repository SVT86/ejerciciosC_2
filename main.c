#include <stdio.h>
#include "interface.h"

int main(int argc, char **argv)
{

    int a, b, multi;

    a = 2;

    for (b = 1; b <= MAXIMO; b++)
    {

        printf("(%i,%i) : ",a,b);
        multi=fmultiplica(a,b); 
        muestraMulti(multi);
    }
}