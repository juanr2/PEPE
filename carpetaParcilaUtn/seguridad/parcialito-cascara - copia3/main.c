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



int main()
{

    char seguir='s';
    int opcion,i,j,indexFree,indexFreeProductProvider,auxIdProduct,auxQuantity,auxSelection,firstFlag=0,auxCodeProduct,foundIndexProduct,foundIndexProductProvider;
    char input[50],inputDescription[50];
    float auxPrice;


     setStatusProvider(provider,CANTPROVIDER );

    setStatusProduct(prod,CANTPRODUCT);

    //precarga:

  //  setProduct(prod,0,1 ,"lavan","limpia",4,10);

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

            auxPrice=getFloat("INDIQUE EL PRECIO: ","ERROR:SOLO SE ACEPTAN NUMEROS","Rango valido [0 - 100]",1,100);

             setProduct(prod,indexFree,auxIdProduct ,input,inputDescription,auxQuantity,auxPrice);

             indexFreeProductProvider=obtenerEspacioLibrePP(prodProvider,CARDINAL);


            printf("Codigo\tNombre\n");
             for(i=0;i<CANTPROVIDER;i++){
            printf("%d\t%s\n",provider[i].idProvider,provider[i].name);

             }
             auxSelection=getInt("SELECCIONE UN PROVEEDOR: ","ERROR USTED NO INGRESO UN NUMERO","EL RANGO VALIDO ES DEL 1 AL 2",1,2);


            setProductProvider(prodProvider,indexFreeProductProvider,auxIdProduct ,auxSelection);



             showProduct(prod,CANTPRODUCT);

            firstFlag=1;

            system("pause");
            system("cls");

            break;

        case 2:

           if(!flagDetector(firstFlag)){
            break;
           }


           auxCodeProduct=getInt("INGRESE EL NUMERO ID DEL PRODUCTO QUE BUSCA:  ","ERROR USTED NO INGRESO UN NUMERO","EL RANGO VALIDO ES DEL 1 AL 5",1,5);

           cleanProduct(prod,prodProvider,CANTPRODUCT,CANTPROVIDER,auxCodeProduct);


            system("pause");
            system("cls");
            break;
        case 3:
              if(!flagDetector(firstFlag)){
            break;
           }

           auxCodeProduct=getInt("INGRESE EL NUMERO ID DEL PRODUCTO QUE BUSCA:  ","ERROR USTED NO INGRESO UN NUMERO","EL RANGO VALIDO ES DEL 1 AL 5",1,5);

            foundIndexProduct=findProductByCode(prod,CANTPRODUCT,auxCodeProduct);

            if(foundIndexProduct==-1){

                printf("CODIGO INEXISTENTE");
            }

            auxIdProduct=getInt("INGRESE EL NUMERO ID DEL PRODUCTO:  ","ERROR USTED NO INGRESO UN NUMERO","EL RANGO VALIDO ES DEL 1 AL 5",1,5);

            getString("INGRESE EL NOMBRE DEL PRODUCTO: ","SOLO SE ACEPTAN LETRAS","EXCEDIO LOS 50 CARACTERES",input, 1, 50);

            getDescription("DESCRIBA EL PRODUCTO: ","EXCEDIO LOS 50 CARACTERES",inputDescription, 1, 50);

            auxQuantity=getInt("INGRESE LA CANTIDAD:  ","ERROR USTED NO INGRESO UN NUMERO","EL RANGO VALIDO ES DEL 1 AL 5",1,2000);

            auxPrice=getFloat("INDIQUE EL PRECIO: ","ERROR:SOLO SE ACEPTAN NUMEROS","Rango valido [0 - 100]",1,100);


            setProduct(prod,foundIndexProduct,auxIdProduct ,input,inputDescription,auxQuantity,auxPrice);


           foundIndexProductProvider=findProductProviderByCode(prodProvider,CARDINAL,auxCodeProduct);


            printf("Codigo\tNombre\n");
             for(i=0;i<CANTPROVIDER;i++){
            printf("%d\t%s\n",provider[i].idProvider,provider[i].name);

             }
             auxSelection=getInt("SELECCIONE UN PROVEEDOR: ","ERROR USTED NO INGRESO UN NUMERO","EL RANGO VALIDO ES DEL 1 AL 2",1,2);

            setProductProvider(prodProvider,foundIndexProductProvider,auxIdProduct ,auxSelection);

              system("pause");
            system("cls");
            break;
        case 4:
            if(!flagDetector(firstFlag)){
            break;
           }

           eProvider provAux;

           for(i=0;i<CANTPROVIDER-1;i++){
            for(j=i+1;j<CANTPROVIDER;j++){

                if(strcmp(provider[i].name,provider[j].name)<0){

                    provAux=provider[j];
                    provider[j]=provider[i] ;
                    provider[i]=provAux;



                }






            }
           }


            for(i=0;i<CANTPROVIDER;i++){


                printf("%s",provider[i].name);
            }



              system("pause");
            system("cls");
            break;

            case 5:
              if(!flagDetector(firstFlag)){
            break;
           }







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

