#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float x;
    float y;
    float suma;
    float resta;
    float division;
    float multiplicar;
    long int fact;
    int flagPrimero=0;
    int flagSegundo=0;



    while(seguir=='s')
    {
        if(flagPrimero==0)
        {
            printf("1- Ingresar 1er operando (A=x)\n");

        }
        else
        {
            printf("1- Ingresar 1er operando (A=%f)\n",x);
        }


        if(flagSegundo==0)
        {

            printf("2- Ingresar 2do operando (B=y)\n");

        }
        else
        {
            printf("2- Ingresar 2do operando (B=%f)\n",y);
        }
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        printf ("\nElija una opcion: ");

        scanf("%d",&opcion);

        switch(opcion)
        {

        case 1:
            flagPrimero=0;

            printf("Ingrese el primer operando: ");
            scanf("%f",&x);
            flagPrimero=1;


            break;
        case 2:
            flagSegundo=0;

            printf("Ingrese el segundo operando: ");
            scanf("%f",&y);
            flagSegundo=1;

            break;
        case 3:
            if (flagPrimero==0||flagSegundo==0)

            {
                printf("ERROR DE SINTAXIS:vuelva a cargar los operadores.\n");
            }
            else
            {
                suma=sumaNumeros(x,y);
                printf("La suma es: %f\n",suma);
            }

            break;
        case 4:
            if (flagPrimero==0||flagSegundo==0)
            {
                printf("ERROR DE SINTAXIS:vuelva a cargar los operadores.\n");
            }
            else
            {
                resta=restarNumeros(x,y);
                printf("La resta es: %f\n",resta);
            }
            break;
        case 5:


            if (flagPrimero==0||flagSegundo==0)

            {
                printf("ERROR DE SINTAXIS:vuelva a cargar los operadores.\n");
            }
            else
            {
                division=dividirNumeros(x,y);
                printf("La division es: %f\n",division);
                break;
            }
            break;

        case 6:
            if (flagPrimero==0||flagSegundo==0)

            {
                printf("ERROR DE SINTAXIS:vuelva a cargar los operadores.");
            }
            else
            {
                multiplicar=multiplicarNumeros(x,y);
                printf("La multiplicacion es: %f\n",multiplicar);
                break;
            }
        case 7:
            fact=factorialNumero (x);
            printf("El factorial es: %d\n",fact);
            break;
        case 8:
            if (flagPrimero==0||flagSegundo==0)

            {
                printf("ERROR DE SINTAXIS:vuelva a cargar los operadores.\n");
            }
            else
            {
                suma=sumaNumeros(x,y);
                resta=restarNumeros(x,y);
                division=dividirNumeros(x,y);
                multiplicar=multiplicarNumeros(x,y);
                fact=factorialNumero (x);
                printf("La suma es: %f \nLa resta es: %f \nLa division es: %f \nLa multiplicacion es: %f \nEl factorial del primer numero es: %d \n",suma,resta,division,multiplicar,fact);
                break;
            }
        case 9:
            seguir = 'n';
            break;


        }

        system("pause");
        system("cls");





    }

    return 0;


}
