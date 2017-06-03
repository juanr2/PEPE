#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    FILE *bin;
    EMovie movie;

    char seguir='s';
    char auxiliarSalir;
    char *nombreArchivo = "pagina_resultado\\peliculas.html";
    int opcion;


    if ((bin=fopen(ARCH,"rb+"))==NULL)
    {
        printf("\nSe va a generar un archivo\n");
        system("pause");
        system("cls");

        initMovies();
    }

    while(seguir=='s')
    {
        printf("\n\n--------------------------------MENU DE OPCIONES--------------------------------\n\n");
        printf("1- AGREGAR PELICULA\n");
        printf("2- BORRAR PELICULA\n");
        printf("3- GENERAR PAGINA WEB\n");
        printf("4- SALIR\n");

        printf("\nELIJA UNA OPCION: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            agregarPelicula();

            break;
        case 2:

            borrarPelicula(1);

            break;
        case 3:
            generarPagina(nombreArchivo);
            break;
        case 4:

            printf(" QUIERE SEGUIR EN EL PROGRAMA? s/n: ");
            scanf("%s",&auxiliarSalir);

            if (auxiliarSalir=='n')
            {
                seguir = 'n';
                break;
            }
            else
            {
                seguir='s';
            }

        }
    }
    fclose(bin);
    getch();

    return 0;
}
