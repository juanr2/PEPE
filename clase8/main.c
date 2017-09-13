#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    struct alumno alu;
    struct alumno alu2;


    printf("INGRESE EL LEGAJO: ");
    scanf("%d",&alu.legajo);

    while(alu.legajo>10){
         printf("INGRESE un LEGAJO del 1 al 10: ");
         scanf("%d",&alu.legajo);

    }

    printf("INGRESE EL NOMBRE: ");
    fflush(stdin);
    scanf("%[^\n]",alu.nombre);


    printf("%s\n",strupr(alu.nombre));

    printf("INGRESE LA PRIMER NOTA: ");
    scanf("%d",&alu.nota1);

    printf("INGRESE LA SEGUNDA NOTA: ");
    scanf("%d",&alu.nota2);


    printf("EL PROMEDIO ES: %f: \n",alu.promedio=((float)alu.nota1+alu.nota2)/2);


        alu2=alu;

        printf(" el legajo es: %d\n",alu2.legajo);
        printf(" el nombre es: %s",alu2.nombre);


    return 0;
}
