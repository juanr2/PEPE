#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define CANTIDAD 3

typedef struct
{
    int id[CANTIDAD];
    char nombre[CANTIDAD][40];
    char nacionalidad[CANTIDAD][40];
} eAutor;

typedef struct
{
    int id;
    char titulo[40];
    char genero[40];
    char editorial[40];


} eLibro;



int main()
{
    int opcion,i;
    char seguir='s';

    eAutor autor[CANTIDAD];



    do
    {
        opcion=menu("1-ALTA\n2-BAJA\n3-MODIFICACION\n4-LISTA\n5-SALIR");



        switch(opcion)
        {
        case 1:

            for(i=0;i<CANTIDAD;i++){

              printf("ingrese el id del autor: ");
            scanf("%d",&autor[i].id);
            }

            break;
        case 2:
            break;

        case 3:
            break;
        case 4:
            break;
        case 5:
            seguir='n';
            break;




        }
    }
    while(seguir=='s');


    return 0;
}





