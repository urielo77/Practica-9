//Dado una lista con 5 enteros, imprimir la lista
#include <stdio.h>

int main()
{
    
  int list[5] = {57, 73, 24, 12, 20}; 
  int i;
  
  printf("Los numeros de la lista son: "); 
  
  for(i=0; i<5; i++)
  {
    printf("%d, ",  list[i]);
  }
  printf("\n");

}
