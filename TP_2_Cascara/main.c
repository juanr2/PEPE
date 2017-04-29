#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define A 20



int main()
{
    Elista lista[A];
    Elista auxLista;

    inicializarArray(lista,A,0);


    char seguir='s';
    int opcion=0;
    int dni;
    int i=0;
    int j;
    int indiceLugarLibre;
    int edadAux;
    int dniAux;

    char auxiliarNombre [30];
    int auxiliarEdad;
    int auxiliarDni;
    int sw;
    char nombre[30];

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:

            indiceLugarLibre=obtenerEspacioLibre(lista,A, 0);
            if (indiceLugarLibre==-1)
            {
                printf("no quedan lugares libres\n");
                break;
            }


            fflush(stdin);
            printf("ingrese el nombre: ");
            gets(auxiliarNombre);

            strcpy(lista[indiceLugarLibre].nombre,auxiliarNombre);
            lista[indiceLugarLibre].estado = 1;

            printf("ingrese la edad: ");
            scanf("%d", &edadAux);
            printf("ingrese el dni: ");
            scanf("%d", &dniAux);

            lista[indiceLugarLibre].edad = edadAux;
            lista[indiceLugarLibre].dni = dniAux;
            break;
        case 2:

            buscarPorDni(lista,dni,A);
            break;
        case 3:
            imprimirLista(lista,A);
            break;
        case 4:
            imprimirGrafico(lista,A);
            break;
        case 5:
            seguir = 'n';
            break;
        }
        system("pause");
        system("cls");

    }
    return 0;

}

