#include"funciones.h"
#include <conio.h>
#include <stdlib.h>




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
int getInt(char message[],char errorMensaje[],char eMessage[], int lowLimit, int hiLimit)
{

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
