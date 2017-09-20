#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define CANT 1000

typedef struct{

int codigoProducto;
int codigoProveedor;
char descripcionProducto[50];
float importe;
int cantidad;

}eProducto;

typedef struct{

int codigoProveedor;
char descripcionProducto[50];

}eProveedor;


int menu(cadena[]);

int main()
{
    char opcion,rta='n';



    do{


    switch(opcion)




    printf("desea salir s/n: ");
    fflush(stdin);
    rta=getch();
    }while(rta!='s');
    printf("Hello world!\n");
    return 0;
}
int menu(cadena[]){




}
