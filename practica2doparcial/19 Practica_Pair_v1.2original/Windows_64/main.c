#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"
#include <string.h>

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/



int getInt(char message[],char errorMensaje[],char eMessage[], int lowLimit, int hiLimit);
int funcionValidarNumeros(char mensaje[],char validar[]);


 ArrayList *al;

int main()
{


    char seguir='s';
    int opcion;
      FILE* pFile;

    while(seguir=='s')
    {


        opcion=getInt("-------MENU PRINCIPAL-------\n\n\n1-PARSE DEL ARCHIVO CSV\n2-LISTAR EMPLEADOS\n3-ORDENAR POR NOMBRE\n4-AGREGAR UN ELEMENTO\n5-ELIMINA UN ELEMENTO\n6-LISTA TODO\n\nELIJA UNA OPCION: ","ERROR:SOLO SE ACEPTAN NUMEROS","Rango valido [1 - 6]",1,6);


        switch(opcion)
        {
        case 1:



                pFile = open("data.csv","rb");

                al =al_newArrayList();


                    parserEmployee(pFile, al);



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

