#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define CANTIDAD 45

int main()
{
    char nombre[CANTIDAD];
    char apellido[CANTIDAD];
    char apellidoNombre[45];
    int i;


    printf("ingrese el nombre: ");
    fflush(stdin);
    scanf("%[^\n]",nombre);


    printf("ingrese el apellido: ");
    fflush(stdin);
    scanf("%[^\n]",apellido);

    strlwr(nombre);
    strlwr(apellido);

    nombre[0]=toupper(nombre[0]);
    apellido[0]=toupper(apellido[0]);

    for (i=0;i<CANTIDAD;i++){

        if(nombre[i]==' '&&nombre[i+1]!=' '){


            nombre[i+1]=toupper(nombre[i+1]);
            break;

        }

    }

     for (i=0;i<CANTIDAD;i++){

        if(apellido[i]==' '&&apellido[i+1]!=' '){


            apellido[i+1]=toupper(apellido[i+1]);
            break;

        }

    }




    strcpy(apellidoNombre,apellido);
    strcat(apellidoNombre, " ");
    strcat(apellidoNombre, nombre);

    printf("%s",apellidoNombre);

}
