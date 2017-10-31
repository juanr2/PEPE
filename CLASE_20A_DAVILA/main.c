#include <stdio.h>
#include <stdlib.h>


typedef struct{

char name[32];
int edad;
}Epersona;



int main()
{
    int size=5;
    int index=0;
    char salir;
    int i;

    Epersona persona;

   Epersona *lista= (Epersona*)malloc(sizeof(Epersona)*size);

   do{
                printf("\ningrese el nombre: ");
    fflush(stdin);
    scanf("%s",persona.name);

    printf("\ningrese la edad: ");
    scanf("%d",&persona.edad);

    lista[index]=persona;
    index++;








    printf("desea salir: ");
    fflush(stdin);
    scanf("%c",&salir);



   }while(salir!='s');

    for(i=0;i<=index;i++){

        printf("%s %d",(lista+i)->name,(lista+i)->edad);
        i++;
    }


    return 0;
}
