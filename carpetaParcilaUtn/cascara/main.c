#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#includefunciones.h





int getInt(char message[],char errorMensaje[],char eMessage[], int lowLimit, int hiLimit);
int funcionValidarNumeros(char mensaje[],char validar[]);


int main()
{




    char seguir='s';
    int opcion;

    while(seguir=='s')
    {


        opcion=getInt("-------MENU PRINCIPAL-------\n\n\n1-ALTA\n2-BAJA\n3-MODIFICACION\n4-INFORMAR\n5-LISTAR\n6-SALIR\n\nELIJA UNA OPCION: ","ERROR:SOLO SE ACEPTAN NUMEROS","Rango valido [1 - 6]",1,6);


        switch(opcion)
        {
        case 1:

//            indiceLibre=obtenerEspacioLibre(pers,CANTIDAD);
//
//            if(indiceLibre==-1)
//            {
//
//                printf("NO HAY LUGAR DISPONIBLE\n");
//                break;
//            }



            system("pause");
            system("cls");

            break;

        case 2:



            system("pause");
            system("cls");
            break;
        case 3:



              system("pause");
            system("cls");
            break;
        case 4:




              system("pause");
            system("cls");
            break;
            case 5:




              system("pause");
            system("cls");
            break;
        case 6:
            seguir = 'n';
            break;
        }

    }

    return 0;
}


int getInt(char message[],char errorMensaje[],char eMessage[], int lowLimit, int hiLimit){
   char auxString[256];
    int auxInt;


    while(1){


   if(!funcionValidarNumeros(message,auxString)){


     printf("%s",errorMensaje);
     printf("\n");
     system("pause");
     system("cls");
   continue;


   }




   auxInt=atoi(auxString);

   if(auxInt < lowLimit || auxInt > hiLimit){

     printf("%s",eMessage);
     printf("\n");
     system("pause");
     system("cls");


      continue;



   }



        return auxInt;


     }



}

int funcionValidarNumeros(char mensaje[],char validar[])
{

    int i=0;

    printf("\n%s",mensaje);
    fflush(stdin);
    scanf("%s",validar);

    while(validar[i]!='\0')
    {

        if(validar[i]<'0'||validar[i]>'9')

            return 0;



        i++;

    }
    return 1;
}

