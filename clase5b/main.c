#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 2

int main()
{

    int edad[CANTIDAD];
    int i,flag;
    float salario[CANTIDAD];
    int legajo[CANTIDAD];
    char r='s';
    int estado[CANTIDAD];


    for(i=0; i<CANTIDAD; i++)
    {

        estado[i]=0;
    }

    do{
    flag=0;
    for(i=0; i<CANTIDAD; i++)
    {

        if (estado==0)
        {
            printf("INGRESE LA EDAD: ");
            scanf("%d",&edad[i]);

            printf("INGRESE EL SALARIO: ");
            scanf("%f",&salario[i]);

            legajo[i]=i+1;
            estado[i]=1;
            flag=1;
            break;
        }
    }

    if (flag==0)
    {

        printf("espacio insuficiente");
    }

    printf("desea seguir: ");
    fflush(stdin);
    scanf("%c",&r);
    }while(r=='s');







    system("cls");
    printf("\n\n\n");
    printf("EDAD\t SALARIO\t LEGAJO\t INDICE\n");
    for(i=0; i<CANTIDAD; i++)
    {


        printf(" %d\t",edad[i]);
        printf(" %.2f\t",salario[i]);
        printf(" %d\t",legajo[i]);
        printf(" %d\n",i);
    }









    return 0;
}



