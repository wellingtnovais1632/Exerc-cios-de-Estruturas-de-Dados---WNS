/*5.chamadas e funções, as mensagens em tela referente à cada operação
 matemática que
o usuário escolher (adição, subtração etc). Ou seja, serão 4 funções.:
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

main ()
{

float n1,n2,resultado;
char operador;


printf("\n Digite o primeiro numero:");
scanf ("%f",&n1);
printf("\n Digite o segundo numero:");
scanf ("%f",&n2);
printf("\n Digite o operador:");
scanf ("%s",&operador);

getch();
if (operador=='+') {
resultado=n1+n2;    
printf ("\n O resultado e: %f",resultado);


}  

else
if (operador=='-') {
resultado=n1-n2;
printf ("\n O resultado e: %f",resultado);

}

else
if (operador=='/') {
resultado=n1/n2;
printf ("\n O resultado e: %f",resultado);

}

else  
if (operador=='*') {
resultado=n1*n2;
printf ("\n O resultado e: %f",resultado);


}
getch();

}
