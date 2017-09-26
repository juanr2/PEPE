
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <ctype.h>
#include<conio.h>
#include<string.h>


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

int funcionPosLibre(eProducto prod[],int cant){

int i;

for(i=0;i<cant;i++){

if(prod[i].estado==0){



    return i;
}
}
return -1;




}

int funcionPosLibrePP(eProductoProveedor productoProveedores[],int cant){

int i;

for(i=0;i<cant;i++){

if(productoProveedores[i].estado==0){



    return i;
}
}
return -1;




}

int funcionValidar(char num[]){

int cont=0,i,flag=0;

 cont=strlen(num);

    for(i=0;i<cont;i++){


        if(!isdigit(num[i])){
            flag=1;
            break;

             }

    }

if(flag==1){

    printf("ERROR!!!!NO ES UN NUMERO\n");
    return 0;

}
else{

    return 1;
}

}


int funcionValidarNumeros(char validar[])
{

    int i;

    while(validar[i]!='\0')
    {

        if((validar[i]<'0'||validar[i]>'9')&&validar[i]!='.')

            return 0;



        i++;

    }
    return 1;
}


