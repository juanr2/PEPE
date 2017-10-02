#include <stdio.h>
#include <stdlib.h>
#include"funciones.h"
#include<string.h>
#include<conio.h>

int main()
{
    float r;



    r = getFloat("Cual es tu edad?","ERROR:SOLO SE ACEPTAN NUMEROS","Rango valido [0 - 100]",1,100);

    printf("%.2f",r);

    return 0;
}
