#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct
{

    char nombre[50];
    int edad;
    int dni;
    int estado;


} Elista;


void inicializarArray(Elista lista[], int cont, int valor)

{
    int i;
    for(i=0; i<cont; i++)
    {
        lista[i].estado=valor;
        strcpy(lista[i].nombre,"");
    }
}



int validar_cadena(int cadena[30])

{

    int i=0,sw=0,j;

    j=strlen(cadena);

    while(i<j&&sw==0)
    {
        if(isalpha(cadena)!=0)

        {
            i++;
        }
        else
        {
            sw=1;
        }
    }
}


/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(Elista lista[], int cont, int valor)
{
    int i;
    for(i=0; i<cont; i++)
    {
        if(lista[i].estado==valor)
        {
            return i;
        }

    }
    return -1;
}
/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(Elista lista[], int dni, int cont)
{
    int i;
    char respuesta;

    printf("ingrese dni a buscar: ");
    scanf("%d",&dni);

    for (i=0; i<cont; i++)
    {
        if(lista[i].dni==dni)
        {
            printf("%s %d %d",lista[i].nombre,lista[i].edad,lista[i].dni);
            printf("\n");
            printf("%d",i);

            printf("Si esta seguro de eliminar el registro presione la letra s");
            respuesta=getche();
            if(respuesta=='s')
            {
                lista[i].estado=0;
            }
            else
            {
                printf("accion cancelada");
            }


        }
    }

}
/**
 * Obtiene la lista cargada por el usuario.
 * @param toma el array de la lista original y lo almacena en una lista auxiliar.
 * @param utiliza el array lista con el subindice j para ordenar los nombre.
 * @return devuelve la lista ordenada alfabeticamente según el nombre.
 */
void imprimirLista (Elista lista[],int cont)
{
    Elista auxLista;
    int i;
    int j;

    for(i=0; i<cont-1; i++)
    {
        for(j=i+1; j<cont; j++)
        {

            if(strcmp(lista[i].nombre, lista[j].nombre)>0)
            {
                auxLista=lista[i];
                lista[i]=lista[j];
                lista[j]=auxLista;
            }
        }
    }

    printf("nombre\t edad\t estado\t dni\n");
    for(i=0; i<cont; i++)
    {
        if(lista[i].estado == 0) continue;
        printf("%s\t%d\t%d\t%d\n",lista[i].nombre,lista[i].edad,lista[i].estado,lista[i].dni);
    }
    return 0;
}

void imprimirGrafico(Elista lista[],int cont)
{
    int i;
    int countMenores18 = 0;
    int count19_35 = 0;
    int countMayores35 = 0;

    int startPosMenores18;
    int startPos19_35;
    int startPosMayores35;

    for(i=0; i<cont; i++)
    {
        if(lista[i].estado == 0) continue;

        if(lista[i].edad < 18) countMenores18++;
        if(lista[i].edad >= 19 && lista[i].edad <= 35) count19_35++;
        if(lista[i].edad > 35) countMayores35++;
    }

    startPosMenores18 = cont - countMenores18;
    startPos19_35 = cont - count19_35;
    startPosMayores35 = cont - countMayores35;

    printf("Grafico de edades:\n");
    printf("\n");

    for(i=0; i<cont; i++)
    {
        char iconMenores18 = i >= startPosMenores18 ? '*' : ' ';
        char icon19_35 = i >= startPos19_35 ? '*' : ' ';
        char iconMayores35 = i >= startPosMayores35 ? '*' : ' ';

        printf("%c\t%c\t\t%c\n", iconMenores18, icon19_35, iconMayores35 );
    }

    printf("< 18\t19 a 35\t\t> 35\n");
    printf("\n");
    printf("\n");
}

#endif // FUNCIONES_H_INCLUDED
