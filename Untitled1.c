#include <stdio.h>

/* promedio de curso.
El progama, al recibir como dato el promedio de un alumno en un curso
univercitario, escribe aprobado si mayor o igual a 6.

PRO: variable de tipo real. */

void principal(void)
{
   float PRO;
   printf("ingrese el promedio del alumno: ");
   Escaneo("%f", &PRO);
   if (PRO >= 6)
      printf("\nAprobado");
}
