#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/**
*\brief Recibe dos numeros y calcula la suma
*\param num1 corresponde al primer operando ingresado por el usuario
*\param num2 corresponde al segundo operando ingresado por el usuario
*\return la suma de ambos operandos

*/

float sumaNumeros (float num1, float num2)
{

    return num1+num2;
}

/**
*\brief Recibe dos numeros y calcula la resta.
*\param num1 corresponde al primer operando ingresado por el usuario
*\param num2 corresponde al segundo operando ingresado por el usuario
*\return la resta de ambos operandos

*/
float restarNumeros (float num1, float num2)
{

    return num1-num2;
}
/**
*\brief Recibe dos números y calcula el cociente.
*\param num1 corresponde al primer operando ingresado por el usuario
*\param num2 corresponde al segundo operando ingresado por el usuario
*\return el cociente de la división de ambos operandos

*/
float dividirNumeros(float num1, float num2)
{
    while (num2==0)
    {
        printf("Error: ingrese un numero distinto de cero: ");
        scanf("%f",&num2);
    }
    return (float)num1/num2;
}
/**
*\brief Recibe dos numeros y calcula el producto.
*\param num1 corresponde al primer operando ingresado por el usuario
*\param num2 corresponde al segundo operando ingresado por el usuario
*\return el producto de ambos operandos

*/
float multiplicarNumeros (float num1, float num2)
{

    return num1*num2;
}
/**
*\brief Recibe un número y calcula el factorial.
*\param num1 corresponde al primer operando ingresado por el usuario
*\param se declara un fariable i, de tal forma que se pueda calcular el factorial por decremento
*\return el factorial del primer operando.

*/
long factorialNumero (int num1)
{
    int factorial=1;
    int i;
    for (i=num1; i>0; i--)
    {
        factorial=factorial*i;

    }
    return factorial;

}
