#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <ctype.h>
#include<conio.h>
#define CANT 1000



int funcionPosLibre(eProducto prod[],int cant);

eProducto prod[CANT];

int main()
{
    char op,rta='n';

    do
    {
        op=funcionMenu("1-ALTA\n2-MODIFICAR\n3-BAJA\n4-INFORMAR\n5-LISTAR\n6-SALIR\n");





        switch(op)
        {

        case '1':

            printf("alta\n");

            system("pause");
             system("cls");
            break;
        case 2:
            break;

        case 3:
            break;
        case 4:
            break;

        case 5:
            break;
        case 6:
             printf("desea salir s/n: ");
        fflush(stdin);
        rta=getch();
            break;

            system("pause");

        }





    }while(rta!='s');

    return 0;
}
