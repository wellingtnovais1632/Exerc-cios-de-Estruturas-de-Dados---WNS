/*5.chamadas e fun��es, as mensagens em tela referente � cada opera��o
 matem�tica que
o usu�rio escolher (adi��o, subtra��o etc). Ou seja, ser�o 4 fun��es.:
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
