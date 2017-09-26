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
    int i,posLibre,posLibrePP,auxCod;

    char auxCodigo[30],auxImporte[30],auxCantidad[30];

      int auxiliarCodigo,indiceProducto,flag=0;






    for(i=0;i<CANT;i++){

            prod[i].estado=0;
        }

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

                printf("INGRESE EL CODIGO DEL PRODUCTO: ");
                fflush(stdin);
                scanf("%s",auxCodigo);

                while(!funcionValidar(auxCodigo)){

                printf("INGRESE EL CODIGO DEL PRODUCTO: ");
                fflush(stdin);
                scanf("%s",auxCodigo);

                }

            prod[posLibre].codigoProducto=atoi(auxCodigo);

                printf("DESCRIBA EL PRODUCTO: ");
                fflush(stdin);
                scanf("%s",prod[posLibre].descripcionProducto);

                printf("INGRESE EL IMPORTE: ");
                fflush(stdin);
                scanf("%s",auxImporte);

                while(funcionValidarNumeros(auxImporte)==0){


                printf("INGRESE EL IMPORTE: ");
                fflush(stdin);
                scanf("%s",auxImporte);

                }

                prod[posLibre].importe=atof(auxImporte);

                printf("INGRESE LA CANTIDAD: ");
                fflush(stdin);
                scanf("%s",auxCantidad);

                while(!funcionValidar(auxCantidad)){

                printf("INGRESE LA CANTIDAD: ");
                fflush(stdin);
                scanf("%s",auxCantidad);

                }


                prod[posLibre].cantidad=atoi(auxCantidad);

                prod[posLibre].estado=1;


            printf("CODIGO\tNOMBRE\n");
            for(i=0;i<CANTPROV;i++){


                printf("%d\t",proveedores[i].codigoProveedor);
                printf("%s\n",proveedores[i].nombre);
            }

                posLibrePP=funcionPosLibrePP(productoProveedores,CARDINALIDAD);

                printf("\nINGRESE EL CODIGO DEL PROVEEDOR:");

                scanf("%d",&auxCod);

                productoProveedores[posLibrePP].codigoProveedor=auxCod;
                productoProveedores[posLibrePP].codigoProducto=prod[posLibre].codigoProducto;

//                for(i=0;i<3;i++){
//
//                    printf("%d\t",productoProveedores[i].codigoProducto);
//                    printf("%d\n",productoProveedores[i].codigoProveedor);
//                }

            system("pause");
             system("cls");
            break;
        case '2':


            printf("\nINGRESE EL CODIGO DEL PRODUCTO A BUSCAR:");
            scanf("%d",&auxiliarCodigo);

            for(i=0;i<CANT;i++){

                if(auxiliarCodigo==prod[i].codigoProducto){


                printf("\nPRODUCTO ENCONTRADO!!!!!");
                indiceProducto=i;

                flag=1;
                }else{

                printf("PRODUCTO NO ENCONTRADO!!!\n");
                break;


                }

                if(flag==1){




                 printf("\nDESCRIBA NUEVAMENTE EL PRODUCTO: ");
                fflush(stdin);
                scanf("%s",prod[indiceProducto].descripcionProducto);

                printf("\nINGRESE EL NUEVO IMPORTE:");
                fflush(stdin);
                scanf("%s",auxImporte);

                while(funcionValidarNumeros(auxImporte)==0){


                printf("\nINGRESE EL IMPORTE: ");
                fflush(stdin);
                scanf("%s",auxImporte);

                }

                prod[indiceProducto].importe=atof(auxImporte);

                printf("\nINGRESE LA NUEVA CANTIDAD: ");
                fflush(stdin);
                scanf("%s",auxCantidad);

                while(!funcionValidar(auxCantidad)){

                printf("\nINGRESE LA CANTIDAD: ");
                fflush(stdin);
                scanf("%s",auxCantidad);

                }


                prod[indiceProducto].cantidad=atoi(auxCantidad);


                for(i=0;i<CARDINALIDAD;i++){

                    if(auxiliarCodigo==productoProveedores[i].codigoProducto){

                     printf("CODIGO\tNOMBRE\n");
            for(i=0;i<CANTPROV;i++){


                printf("%d\t",proveedores[i].codigoProveedor);
                printf("%s\n",proveedores[i].nombre);
            }



                printf("\nINGRESE EL CODIGO DEL PROVEEDOR:");

                scanf("%d",&auxCod);

                productoProveedores[i].codigoProveedor=auxCod;


                    }
                }


                }




            }



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

