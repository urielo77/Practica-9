//Utilizando una lista, capturar las 5 calificaciones de un alumno e imprimir el promediio
#include <stdio.h>

int main ()
{
  int list[5] = {6, 7, 8, 9, 10}; 
  int i, calif=0;
  float prom;
  
  for (i = 0 ; i < 5 ; i++)
  {
    printf("introducir la calificacion numero %d: ",i+1);
    scanf("%d" , &list[i]);
  }
  
  for (i=0; i<5; i++)
  {
      calif = calif + list[i];
  }
  
  prom = calif/5;
  printf("El promedio de las calificaciones es: %f\n", prom);
}
