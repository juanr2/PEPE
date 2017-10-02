
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include "planilla.h"






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
/** \brief recibe un array de estructura y busca el primer indice libre
 *
 * \param Array de estructura
 * \param cant representa el tamaño de la variable de la estructura
 * \return i que representa el indice libre o cero si no hay lugar disponible
 *
 */

int obtenerEspacioLibre(eProduct prod[],int cant ){

int i;


for(i=0;i<cant;i++){

if(prod[i].status==0){

    return i;
}


}

return -1;

}

int obtenerEspacioLibrePP(eProductProvider prodProvider[],int cant ){

int i;


for(i=0;i<cant;i++){

if(prodProvider[i].status==0){

    return i;
}


}

return -1;

}

//int functionValidName(char str[]){
//
//
//int i=0;
//
//
//while(str[i]!='\0'){
//
//    if((str[i]<'a'||str[i]>'z')&&(str[i]<'A'||str[i]>'Z')&&(str[i]!='\n')&&(str[i]!=' '))
//
//        return 0;
//
//
//
//    i++;
//
//}
//return 1;
//}

/**
* \brief Solicita un número al usuario y lo valida
* \param input Se carga el numero ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Limite inferior a validar
* \param hiLimit Limite superior a validar
* \return devuelve un numero entero validado
*
*/
float getFloat(char message[],char errorMensaje[],char eMessage[], int lowLimit, int hiLimit)
{

    char auxString[256];
    float auxFloat;


    while(1){




   if(!funcionValidarNumeros(message,auxString)){


     printf("%s",errorMensaje);
	 printf("\n");
     system("pause");
     system("cls");
   continue;


   }




   auxFloat=atof(auxString);

   if(auxFloat < lowLimit || auxFloat > hiLimit){

     printf("%s",eMessage);
	 printf("\n");
     system("pause");
     system("cls");


      continue;



   }



        return auxFloat;


     }


}

void getString(char message[],char errorMensaje[],char eMessage[],char input[], int lowLimit, int hiLimit){
   char auxString[256];
    int auxInt;


    while(1){


   if(!functionValidString(message,auxString)){


     printf("%s",errorMensaje);
     printf("\n");
     system("pause");
     system("cls");
   continue;


   }




   auxInt=strlen(auxString);

   if(auxInt < lowLimit || auxInt > hiLimit){

     printf("%s",eMessage);
     printf("\n");
     system("pause");
     system("cls");


      continue;



   }



       strcpy(input,auxString);

        break;
     }



}
int functionValidString(char mensaje[],char str[]){


int i=0;


    printf("\n%s",mensaje);
    fflush(stdin);
    scanf("%s",str);

while(str[i]!='\0'){

    if((str[i]<'a'||str[i]>'z')&&(str[i]<'A'||str[i]>'Z')&&(str[i]!='\n')&&(str[i]!=' '))

        return 0;



    i++;

}
return 1;
}

/** \brief Recibe un Array solicita una descripcion y valida su tamaño
 *
 * \param
 * \param
 * \return
 *
 */

void getDescription(char message[],char eMessage[],char inputDescription[], int lowLimit, int hiLimit){
   char auxString[256];
    int auxInt=0;

    while(1){

    printf("\n%s",message);
    fflush(stdin);
    scanf("%s",auxString);

   auxInt=strlen(auxString);

   if(auxInt < lowLimit || auxInt > hiLimit){

     printf("%s",eMessage);
     printf("\n");

      continue;

   }

       strcpy(inputDescription,auxString);

        break;
     }

}
