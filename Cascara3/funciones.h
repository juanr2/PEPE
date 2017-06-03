#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#define A 3
#define ARCH "./bin.dat "

typedef struct
{
    int id;
    char titulo[20];
    char genero[20];
    int duracion;
    char descripcion[500];
    int puntaje;
    char linkImagen[500];
} EMovie;

int loadMovies(EMovie *x)
{
    int flag = 0;
    FILE *f;

    f=fopen(ARCH, "rb");

    if(f==NULL)
    {
        f= fopen(ARCH, "wb+");

        if(f==NULL)
        {
            return 1;
        }

        flag=1;
    }

    if(flag ==0)
    {
        fread(x,sizeof(EMovie),A,f);
    }

    fclose(f);
    return 0;
}


int saveMovies(EMovie * x)
{
    FILE *f;

    f=fopen(ARCH,"wb+");
    if(f == NULL)
    {
        return 1;
    }

    fwrite(x,sizeof(EMovie),A,f);
    fclose(f);

    return 0;
}


void initMovies()
{
    EMovie movies[A];
    int i = 0;

    for( ; i < A; i++)
    {
        movies[i].id = 0;
    }

    saveMovies(movies);
}

/**
 *  Agrega una pelicula al archivo binario
 *  @param movie la estructura a ser agregada al archivo
 *  @return retorna 1 o 0 de acuerdo a si pudo agregar la pelicula o no
 */
int agregarPelicula()
{
    EMovie movies[A];
    loadMovies(movies);

    int i;
    int indexFree = -1;

    for(i=0; i < A; i++)
    {
        if(movies[i].id == 0)
        {
            indexFree = i;
            break;
        }
    }

    if(indexFree != -1)
    {

        movies[indexFree].id = indexFree + 1;
        fflush(stdin);
        printf("INGRESE EL TITULO DE LA PELICULA:  ");
        gets(movies[indexFree].titulo);
        fflush(stdin);
        printf("INGRESE EL GENERO DE LA PELICULA:  ");
        gets(movies[indexFree].genero);
        printf("INGRESE LA DURACION DE LA PELICULA: ");
        scanf("%s", &movies[indexFree].duracion);
        fflush(stdin);
        printf("INGRESE UNA BREVE DESCRIPCION DE LA PELICULA: ");
        gets(movies[indexFree].descripcion);
        printf("INGRESE EL PUNTAJE DE LA PELICULA: ");
        scanf("%d",&movies[indexFree].puntaje);
        fflush(stdin);
        printf("INGRESE EL LINK:  ");
        gets(movies[indexFree].linkImagen);
    }

    saveMovies(movies);
    return 1;
}

/**
 *  Borra una pelicula del archivo binario
 *  @param movie la estructura a ser eliminada al archivo
 *  @return retorna 1 o 0 de acuerdo a si pudo eliminar la pelicula o no
 */
int borrarPelicula(int id)
{
    EMovie movies[A];
    loadMovies(movies);
    int i = 0;
    int index = -1;

    for(; i < A; i++)
    {
        if(movies[i].id == id)
        {
            index = i;
            break;
        }
    }

    if(index == -1)  return index;



    movies[index].id = 0;
    saveMovies(movies);

    return 1;
}

/**
 *  Genera un archivo html a partir de las peliculas cargadas en el archivo binario.
 *  @param lista la lista de peliculas a ser agregadas en el archivo.
 *  @param nombre el nombre para el archivo.
 */
void generarPagina(char *nombre)
{
    EMovie movies[A];
    loadMovies(movies);
    int i = 0;

    FILE *fp;
    char buffer[100] = "Esto es un texto dentro del fichero.";
    fp = fopen ( nombre, "w+" );

    fprintf(fp, "%s", "\n<!DOCTYPE html>");
    fprintf(fp, "%s", "\n<html lang='en'>");
    fprintf(fp, "%s", "\n<head>");
    fprintf(fp, "%s", "\n\t<meta charset='utf-8'>");
    fprintf(fp, "%s", "\n\t<meta http-equiv='X-UA-Compatible' content='IE=edge'>");
    fprintf(fp, "%s", "\n\t<meta name='viewport' content='width=device-width, initial-scale=1'>");
    fprintf(fp, "%s", "\n\t<title>Lista peliculas</title>");
    fprintf(fp, "%s", "\n\t<link href='css/bootstrap.min.css' rel='stylesheet'>");
    fprintf(fp, "%s", "\n\t<link href='css/bootstrap.min.css' rel='stylesheet'>");
    fprintf(fp, "%s", "\n\t<link href='css/custom.css' rel='stylesheet'>");
    fprintf(fp, "%s", "\n</head>");

    fprintf(fp, "%s", "\n<body>");

    fprintf(fp, "%s", "\n\t<div class='container'>");
    fprintf(fp, "%s", "\n\t\t<div class='row'>");

    for(; i < A; i++)
    {
        if(movies[i].id == 0) continue;

        fprintf(fp, "%s", "\n\t\t\t<article class='col-md-4 article-intro'>");
        fprintf(fp, "%s", "\n\t\t\t\t<a href='#'>");
        fprintf(fp, "\n\t\t\t\t\t<img class='img-responsive img-rounded' src='images/%s' alt=''>", movies[i].linkImagen);
        fprintf(fp, "%s", "\n\t\t\t\t</a>");
        fprintf(fp, "%s", "\n\t\t\t\t<h3>");
        fprintf(fp, "\n\t\t\t\t\t<a href='#'>%s</a>", movies[i].titulo);
        fprintf(fp, "%s", "\n\t\t\t\t</h3>");

        fprintf(fp, "%s", "\n\t\t\t\t<ul>");
        fprintf(fp, "\n\t\t\t\t\t<li>Genero: %s</li>", movies[i].genero);
        fprintf(fp, "\n\t\t\t\t\t<li>Puntaje: %d</li>", movies[i].puntaje);
        fprintf(fp, "\n\t\t\t\t\t<li>Duracion: %d hs.</li>", movies[i].duracion);
        fprintf(fp, "%s", "\n\t\t\t\t</ul>");

        fprintf(fp, "%s", "\n\t\t\t\t<p>");
        fprintf(fp, "\n\t\t\t\t\t%s", movies[i].descripcion);
        fprintf(fp, "%s", "\n\t\t\t\t</p>");

        fprintf(fp, "%s", "\n\t\t\t</div>");
    }

    fprintf(fp, "%s", "\n\t\t</div>");
    fprintf(fp, "%s", "\n\t</div>");

    fprintf(fp, "%s", "\n</body>");
    fprintf(fp, "%s", "\n</html>");

    fclose (fp);
}

#endif // FUNCIONES_H_INCLUDED
