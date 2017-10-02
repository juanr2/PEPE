#include <stdio.h>
#include <stdlib.h>
#include"funciones.h"
#include<conio.h>
#include<string.h>
int main()
{



    int r;



    r = getInt("Cual es tu edad?","ERROR:SOLO SE ACEPTAN NUMEROS","Rango valido [0 - 100]",1,100);

        printf("\nLa edad es: %d\n",r);







    return 0;
}
