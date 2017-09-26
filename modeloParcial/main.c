#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <ctype.h>
#include<conio.h>
#include<string.h>
#define CANT 10
#define CANTPROV 5
#define CARDINALIDAD 50





eProducto prod[CANT];
eProveedor proveedores []={{1,"PEPE"},{2,"JUAN"},{3,"CARLOS"},{4,"ALBERTO"},{5,"ROBERTO"}};
eProductoProveedor productoProveedores[CARDINALIDAD];




int main()
{
    char op,rta='n';
    int i,posLibre,posLibrePP,auxCodigo;

    for(i=0;i<CANT;i++){

            prod[i].estado=0;
        }

//    for(i=0;i<CANTPROV;i++){
//
//
//        prod[i].codigoProducto=i+1;
//        strcpy(prod[i].descripcionProducto,"el producto es...");
//
//
//    }






    do
    {
        op=funcionMenu("1-ALTA\n2-MODIFICAR\n3-BAJA\n4-INFORMAR\n5-LISTAR\n6-SALIR\n");






        switch(op)
        {

        case '1':
            posLibre=funcionPosLibre(prod,CANT);

                if(posLibre==-1){

                    printf("NO HAY MAS ESPACIO DISPONIBLE");
                }

                printf("\n\n");

//                 for(i=0;i<CANTPROV;i++){
//
//
//        printf("%d",prod[i].codigoProducto);
//        printf("%s\n",prod[i].descripcionProducto);
//
//
//    }


                printf("\nINGRESE EL CODIGO DEL PRODUCTO:");

                scanf("%d",&auxCodigo);

            prod[posLibre].codigoProducto=auxCodigo;

                printf("DESCRIBA EL PRODUCTO: ");
                fflush(stdin);
                scanf("%s",prod[posLibre].descripcionProducto);

                printf("INGRESE EL IMPORTE: ");
                scanf("%f",&prod[posLibre].importe);

                printf("INGRESE LA CANTIDAD: ");
                scanf("%d",&prod[posLibre].cantidad);

                prod[posLibre].estado=1;


            printf("CODIGO\tNOMBRE\n");
            for(i=0;i<CANTPROV;i++){


                printf("%d\t",proveedores[i].codigoProveedor);
                printf("%s\n",proveedores[i].nombre);
            }

                posLibrePP=funcionPosLibrePP(productoProveedores,CARDINALIDAD);

                printf("\nINGRESE EL CODIGO DEL PROVEEDOR:");

                scanf("%d",&auxCodigo);

                productoProveedores[posLibrePP].codigoProveedor=auxCodigo;
                productoProveedores[posLibrePP].codigoProducto=prod[posLibre].codigoProducto;

//                for(i=0;i<3;i++){
//
//                    printf("%d\t",productoProveedores[i].codigoProducto);
//                    printf("%d\n",productoProveedores[i].codigoProveedor);
//                }

            system("pause");
             system("cls");
            break;
        case 2:
            break;

        case 3:
            break;
        case 4:
            break;

        case 5:
            break;
        case 6:
             printf("desea salir s/n: ");
        fflush(stdin);
        rta=getch();
            break;

            system("pause");

        }





    }while(rta!='s');

    return 0;
}

