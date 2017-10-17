#include <stdio.h>
#include <stdlib.h>
#include"funciones.h"

S_persona per,*person;


int main()
{

person=&per;
printf("%d",loadPerson(person));


    return 0;
}

