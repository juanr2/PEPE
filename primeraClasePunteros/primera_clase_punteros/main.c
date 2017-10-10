#include <stdio.h>
#include <stdlib.h>

int main()
{
//   int nro=5 ,*ptrNro,*ptrNro2;
//
//
//   ptrNro=&nro;
//
//
//   printf("%d\n",*ptrNro);
//      printf("%d\n",ptrNro);
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


int i,vec[5],*ptr;

for(i=0;i<5;i++){

    vec[i]=(i+3);
}

for(i=0;i<5;i++){

    printf("\n%d",vec[i]);
}

ptr=vec;

printf("\n************************\n");

for(i=0;i<5;i++){



    printf("\n%d", *(ptr+i));
}

    return 0;



}

