 /*Funcao recursiva para fatoriais*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

long fatorial (long numero)
{
  if (numero <=1)
   return 1;
   else
    return numero * fatorial (numero -1);
}
main ()
{
  int i;
  system("cls");
  for (i = 1; i <= 10; i++)
   printf ("%2d ! = %1d\n", i, fatorial(i));

   return 0;
   }
