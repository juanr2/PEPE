#include <stdio.h>
#include <stdlib.h>

int main()
{
//   int nro=5 ,*ptrNro,*ptrNro2;
//
////Asignamos la direccion de memoria de la variable que tiene el dato 5
//   ptrNro=&nro;
//
//
//   printf("%d\n",*ptrNro);        //Imprime el valor del dato que contiene la direccion de memoria a la que apunta el puntero
//      printf("%d\n",ptrNro);      //
//       printf("%d\n",&ptrNro);
//
//
//       printf("------------------------\n");
//
//       *ptrNro2=*ptrNro                                                                                                                            ;
//
//
//
//   printf("%d\n",*ptrNro2);
//      printf("%d\n",ptrNro2);
//       printf("%d\n",&ptrNro2);
//
//



//DECLARAMOS UN VECTOR Y UN PUNTERO.
int i,vec[5],*ptr;


////Recorremos el vector y lo cargamos.
//for(i=0;i<5;i++){
//
//    vec[i]=(i+3);
//}
//
//
//
//
////recorremos el vector para mostrarlo
//for(i=0;i<5;i++){
//
//    printf("\n%d",vec[i]);
//}
//
//
////asignamos el vector al puntero ptr!!
//ptr=vec;
//
//printf("\n       ************************\n");
//
//
////recorremos el puntero para mostrarlo
//for(i=0;i<5;i++){
//
//
//
//    printf("\n%d", *(ptr+i));
//}

ptr = vec;


//TRABAJAMOS CON EL PUNTERO PURO
//for(i=0;i<5;i++){
//
//    *(ptr+i) = (i+3);
//}
//
//for(i=0;i<5;i++){
//
//    printf("\n%d", *(ptr+i) );
//}
//


//TRABAJAMOS EL PUNTERO COMO VECTOR
for(i=0;i<5;i++){

    ptr[i] = (i+3);
}
for(i=0;i<5;i++){

    printf("\n%d", ptr[i] );
}

    return 0;



}

