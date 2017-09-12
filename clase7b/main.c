#include <stdio.h>
#include <stdlib.h>

#define CANT 5

int main()
{
    char nombre[CANT][30],auxNombre[CANT][30];
    int nota [CANT],auxNota;
    int i,j;

    for (i=0; i<CANT; i++)
    {

        printf("ingrese el nombre: ");
        fflush(stdin);
        scanf("%[^\n]",&nombre[i]);
        printf("ingrese la nota: ");
        scanf("%d",&nota[i]);


    }
    for(i=0; i<CANT-1; i++)
    {
        for(j=i+1; j<CANT; j++)
        {

            if(nota[i]<nota[j])
            {

                auxNota=nota[i];
                nota[i]=nota[j];
                nota[j]=auxNota;

                strcpy(auxNombre,nombre[i]);
                   strcpy(nombre[i],nombre[j]);
                   strcpy(nombre[j],auxNombre);



            }
            if (nota[i]==nota[j]){
                if(strcmp(nombre[i],nombre[j]>0)){


                auxNota=nota[i];
                nota[i]=nota[j];
                nota[j]=auxNota;

                strcpy(auxNombre,nombre[i]);
                   strcpy(nombre[i],nombre[j]);
                   strcpy(nombre[j],auxNombre);




                }
            }
        }
    }
    printf("not\n");
        printf("nota\tnombre\n");

    for(i=0;i<CANT;i++){


        printf("%d\t",nota[i]);
        printf("%s\n",nombre[i]);

    }



    return 0;
}
