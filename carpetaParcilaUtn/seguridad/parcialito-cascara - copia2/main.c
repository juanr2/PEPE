#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include "planilla.h"

#define CANTPRODUCT 5
#define CANTPROVIDER 2
#define CARDINAL 10





eProduct prod[CANTPRODUCT];
eProvider provider[]={{1,"PEPE",1},{2,"JUAN",1}};
eProductProvider prodProvider[CARDINAL];


void getString(char message[],char errorMensaje[],char eMessage[],char input[], int lowLimit, int hiLimit);

void getDescription(char message[],char eMessage[],char inputDescription[], int lowLimit, int hiLimit);



int main()
{

    char seguir='s';
    int opcion,i,indexFree,indexFreeProductProvider,auxIdProduct,auxQuantity,auxSelection,firstFlag=0;
    char input[50],inputDescription[50];
    float auxPrice;



    for(i=0;i<CANTPROVIDER;i++){


        provider[i].status=0;
    }

     for(i=0;i<CANTPRODUCT;i++){


        prod[i].status=0;
    }



    while(seguir=='s')
    {


        opcion=getInt("-------MENU PRINCIPAL-------\n\n\n1-ALTA\n2-BAJA\n3-MODIFICACION\n4-INFORMAR\n5-LISTAR\n6-SALIR\n\nELIJA UNA OPCION: ","ERROR:SOLO SE ACEPTAN NUMEROS","Rango valido [1 - 6]",1,6);


        switch(opcion)
        {
        case 1:

            indexFree=obtenerEspacioLibre(prod,CANTPRODUCT);

            if(indexFree==-1)
            {
                printf("NO HAY LUGAR DISPONIBLE\n");
                break;
            }

            auxIdProduct=getInt("INGRESE EL NUMERO ID DEL PRODUCTO:  ","ERROR USTED NO INGRESO UN NUMERO","EL RANGO VALIDO ES DEL 1 AL 5",1,5);

            getString("INGRESE EL NOMBRE DEL PRODUCTO: ","SOLO SE ACEPTAN LETRAS","EXCEDIO LOS 50 CARACTERES",input, 1, 50);

            getDescription("DESCRIBA EL PRODUCTO: ","EXCEDIO LOS 50 CARACTERES",inputDescription, 1, 50);

            auxQuantity=getInt("INGRESE LA CANTIDAD:  ","ERROR USTED NO INGRESO UN NUMERO","EL RANGO VALIDO ES DEL 1 AL 5",1,2000);

            auxPrice=getFloat("Cual es el precio?","ERROR:SOLO SE ACEPTAN NUMEROS","Rango valido [0 - 100]",1,100);


            prod[indexFree].idProduct=auxIdProduct;
            strcpy(prod[indexFree].name,input);
            strcpy(prod[indexFree].description,inputDescription);
            prod[indexFree].quantity=auxQuantity;
            prod[indexFree].price=auxPrice;
            prod[indexFree].status=1;

             indexFreeProductProvider=obtenerEspacioLibrePP(prodProvider,CARDINAL);

            if(indexFree==-1)
            {
                printf("NO HAY LUGAR DISPONIBLE\n");
                break;
            }


            printf("Codigo\tNombre\n");
             for(i=0;i<CANTPROVIDER;i++){
            printf("%d\t%s\n",provider[i].idProvider,provider[i].name);

             }
             auxSelection=getInt("SELECCIONE UN PROVEEDOR: ","ERROR USTED NO INGRESO UN NUMERO","EL RANGO VALIDO ES DEL 1 AL 2",1,2);

            prodProvider[indexFreeProductProvider].idProvider=auxSelection;
            prodProvider[indexFreeProductProvider].idProduct=auxIdProduct;
            prodProvider[indexFreeProductProvider].status=1;


            firstFlag=1;



            system("pause");
            system("cls");

            break;

        case 2:

            if(firstFlag==0){

                printf("DEBE DAR DE ALTA POR LO MENOS UN PRODUCTO!!!");
                system("pause");
                system("cls");
                break;
            }



            system("pause");
            system("cls");
            break;
        case 3:



              system("pause");
            system("cls");
            break;
        case 4:




              system("pause");
            system("cls");
            break;
            case 5:




              system("pause");
            system("cls");
            break;
        case 6:
            seguir = 'n';
            break;
        }

    }

    return 0;
}



