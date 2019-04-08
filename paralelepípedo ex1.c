/*Escrever um programa que leia as medidas dos três 
lados a,b, e c de um paralelepípedo, calcule e escreva
 o valor de sua diagonal.*/
  // Função com passagem de dois parâmetros com retorno de valor
#include<stdio.h>
#include<math.h>
float a,b,c,D;
float hipotenusa (float a,float b)
{
    return(sqrt(a*a + b*b));
}
main ()
{
   printf("Entre com A: ");
   scanf("%f",&a);
   printf("Entre com B: ");
   scanf("%f",&b);
   printf("Entre com C: ");
   scanf("%f",&c);
   D = hipotenusa(hipotenusa(a,b),c);
   printf("Diagonal %f",D);
   return 0;
}

