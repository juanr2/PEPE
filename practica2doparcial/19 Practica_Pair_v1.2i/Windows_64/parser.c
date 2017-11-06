#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"
#include <string.h>


int parserEmployee(FILE* pFile , ArrayList* pArrayListEmployee)
{
   char buffer[1024];
   char *record,*line;
   fgets(buffer, sizeof(buffer), pFile); // esto es para saltear la primera linea del archivo que contiene el nombre de las columnas.

   while((line=fgets(buffer, sizeof(buffer), pFile)) != NULL)
   {
     Employee *empl = employee_new();
     record = strtok(line,",");
     int i = 0;

     while(record != NULL)
     {
         switch (i++){
            case 0:
                 empl->id = atoi(record);
                 break;
            case 1:
                 strcpy(empl->name,record);
                 break;
            case 2:
                strcpy(empl->lastName,record);
                break;
            case 3:
                empl->isEmpty = strcmp(record, "true");
                break;
         }

         record = strtok(NULL, ",");
     }

     al_add(pArrayListEmployee, empl);
   }

   return 0;
}
