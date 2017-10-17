#include <stdio.h>
#include <stdlib.h>
#include"arrayPuntero.h"


/** \brief recibe array de numeros y cantidad, accede a los elementos usando aritmetiva de punteros y la imprime por pantalla.
 *
 * \param vec vector de numeros.
 * \param cant cantidad de elementos
 * \return nada
 *
 */

void arraypuntero2 (int vec[],int cant){

int* punteroInt=NULL;
int i;

punteroInt=vec;


for(i=0;i<10;i++){

    printf("%d\n",*(punteroInt+i));

}

}

/** \brief recibe puntero y cantidad de elementos, accede a los eelmentos utilizando notacion vectorial y los imprime por pantalla.
 *
 * \param p puntero
 * \param cant cantidad de elementos.
 * \return no retorna nada
 *
 */

void arraypuntero3(int* p,int cant){

        int i;

        for(i=0;i<cant;i++){

            printf("\n%d",p[i]);

        }




}

/** \brief recibe puntero y cantidad y accede a datos con aritmetica de punteros y lo imprime por pantalla.
 *
 * \param p puntero
 * \param cant cantidad de elementos
 * \return no retorna nada.
 *
 */


void arraypuntero4(int* p,int cant){

        int i;

        for(i=0;i<cant;i++){

            printf("\n%d",*(p+i));

        }




}
