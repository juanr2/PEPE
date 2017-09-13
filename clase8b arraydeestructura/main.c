#include <stdio.h>
#include <stdlib.h>

struct fecha { int dia,mes,anio;};

struct gente {
char nombre[20];
struct fecha f_nacimiento;
};

void main(void)
{
struct gente pers[2];
struct fecha fn;

int i;

for(i=0;i<2;i++){
   printf("Ingrese nombre: ");
fflush(stdin);
scanf("%s",pers[i].nombre);



printf("Ingrese dia de nacimiento: ");
scanf("%d",&fn.dia);
printf("Ingrese mes de nacimiento: ");
scanf("%d",&fn.mes);
printf("Ingrese a¤o de nacimiento: ");
scanf("%d",&fn.anio);

pers[i].f_nacimiento=fn;

}
for(i=0;i<2;i++){

  printf("\n\nLa fecha de nacimiento de %s es : %d /%d /%d\n\n\n",pers[i].nombre,pers[i].f_nacimiento.dia,pers[i].f_nacimiento.mes,pers[i].f_nacimiento.anio);


}







}

//printf("Ingrese dia de nacimiento: ");
//scanf("%d",&pers[i].f_nacimiento.dia);
//printf("Ingrese mes de nacimiento: ");
//scanf("%d",&pers[i].f_nacimiento.mes);
//printf("Ingrese a¤o de nacimiento: ");
//scanf("%d",&pers[i].f_nacimiento.anio);

