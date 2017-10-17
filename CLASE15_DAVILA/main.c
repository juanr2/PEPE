#include <stdio.h>
#include <stdlib.h>
#include"arrayPuntero.h"





int main()
{
    int vec[10]={5,6,7,8,9,10,9,8,7,5};
    int* punter=NULL;

    punter=vec;

    arraypuntero2(vec,10);

    printf("\n*************************");
    arraypuntero3(punter,10);

    printf("\n*************************");
    arraypuntero4(punter,10);
    return 0;
}




