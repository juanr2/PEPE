#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "funciones.h"

int loadPerson( S_persona* person){

 getString("INGRESE EL NOMBRE: ","SOLO SE ACEPTAN LETRAS","EXCEDIO LOS 20 CARACTERES",person, 1, 20);
 getInt("INGRESE SU EDAD: ","SOLO SE ACEPTAN NUMEROS: ","EL RANGO PERMITIDO ES DE 0 A 120",person, 0, 120);

return 1;


}


/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

void getString(char message[],char errorMensaje[],char eMessage[],S_persona *person, int lowLimit, int hiLimit){
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

       strcpy(person->nombre,auxString);

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
/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

void getInt(char message[],char errorMensaje[],char eMessage[],S_persona *person, int lowLimit, int hiLimit){
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



        person->edad=auxInt;
        break;

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
