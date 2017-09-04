#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 2

int main()
{

    int vec[CANTIDAD];
    int i;
    float salario[CANTIDAD];
    int legajo[CANTIDAD];

    for(i=0; i<CANTIDAD; i++)
    {

        //ec[i]=i*2;
        printf("ingrese la edad: ");
        scanf("%d",&vec[i]);

        printf("ingrese el salario: ");
        scanf("%f",&salario[i]);

        legajo[i]=i+1;


    }
    system("cls");
    printf("\n\n\n");
    printf("EDAD\t SALARIO\t LEGAJO\n\n");
    for(i=0; i<CANTIDAD; i++)
    {


        printf(" %d\t",vec[i]);
        printf(" %.2f\t",salario[i]);
        printf(" %d\n",legajo[i]);
    }


    return 0;
}
