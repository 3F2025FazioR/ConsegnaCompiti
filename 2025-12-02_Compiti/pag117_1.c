#include <stdio.h>
#include <stdlib.h>


void SegnoNumero()
{
  float num;

    printf ("Inserire il numero da verificare: ");
    scanf ("%f", &num);
    
    if (num>0)
      printf("il numero %.3f e' positivo\n", num);
     else if(num<0)
      printf("Il numero %.3f e' negativo" , num) ;
     else
      printf("Il numero e' neutro o nullo\n");
      
}


  int main() {

    SegnoNumero();

    system("pause");
    return 0;
}