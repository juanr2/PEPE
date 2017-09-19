#include "funciones.h"

int obtenerEspacioLibre(EPersona lista[],int cant){

int i;

for(i=0;i<cant;i++){


    if(lista[i].estado==0){


        return i;
    }
}
    return -1;
}




int funcionValidar(char validar[]){

int i;

while(validar[i]!='\0'){

    if((validar[i]<'a'||validar[i]>'z')&&(validar[i]<'A'||validar[i]>'Z')&&(validar[i]!='\n'))

        return 0;



    i++;

}
return 1;
}


int buscarPorDni(EPersona lista[], int dni,int cant){
int i;

for(i=0;i<cant;i++){

    if(lista[i].dni==dni)
    {
        return i;
        break;
    }

}

return -1;

}

int funcionValidarNumeros(char validar[])
{

    int i;

    while(validar[i]!='\0')
    {

        if(validar[i]<'0'||validar[i]>'9')

            return 0;



        i++;

    }
    return 1;
}


