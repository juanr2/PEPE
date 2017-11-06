#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"
#include <string.h>


int parserEmployee(FILE* pFile , ArrayList* pArrayListEmployee)
{
    int cadena1;
    char cadena2[51];
    char cadena3[51];
    char cadena4[51];

    while(fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]",&cadena1,cadena2,cadena3,cadena4)!=feof(pFile)){
        Employee *empl = employee_new();

        empl->id = cadena1;
        strcpy(empl->first_name,cadena2);
        strcpy(empl->last_name,cadena3);



    }

    return 0;
}
