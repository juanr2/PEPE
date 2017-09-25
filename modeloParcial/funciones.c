
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <ctype.h>
#include<conio.h>


char funcionMenu(char cadena[])
{

    char option;

    printf("%s",cadena);
    printf("INGRESE UNA OPCION DEL 1 AL 6: ");
    fflush(stdin);
    option=getche();

    while(option<'0'||option>'7')
    {

        printf("\nERROR: REINGRESE LA OPCION");
        fflush(stdin);
        option=getche();

    }

    return option;




}
