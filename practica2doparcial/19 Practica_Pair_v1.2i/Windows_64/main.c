#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/
ArrayList *al;

void load(){
    FILE* pFile = fopen("data.csv","rb");

    if (pFile) {
        parserEmployee(pFile, al);
        fclose(pFile);
    }
}

void listar(){
  int i=0;

  for(i=0; i < al_len(al) ; i++)
  {
      Employee* emp = al_get(al, i);
      employee_print(emp);
  }
}


int main()
{
   al = al_newArrayList();

   load();
   listar();
  /* ordenarPorNombre();
   agregarEmployee();
   eliminarEmployee();*/


    al_deleteArrayList(al);
    system("PAUSE");
    return 0;
}




