/*
8. Escrever no espa�o o algoritmo para ler e imprimir 
dois n�meros inteiros positivos. Atrav�s de fun��es, 
demonstre: Atrav�s de fun��es, demonstre: -Se o primeiro
numero for positivo, imprima o seu quadrado; -Se o segundo
n�mero for maior que 10 e menor que 100, imprimir a mensagem:
�N�mero est� entre 10 e 100 �intervalo permitido�; -Se o segundo 
n�mero for menor que o primeiro, calcular e imprimir a diferen�a
(um menos o outro) entre eles, caso contr�rio, imprimir o primeiro n�mero
adicionado de 1 . 
*/
#include<stdio.h>
 
void calculo (int a , int b){
if(a>0){
 int a2=a*a;
 printf ("numero ao quadrado %d: \n",a2);
}
if((b>10) && (b<100)){
 printf("Intervalo Permitido\n");
}
    if(a>b){
     int sub=a-b;
     printf("Subtracao %d",sub);
}else{


a=a+1;
printf("primeiro numero mais 1: %d",a);

}
}




 
 
 
 
 
 
 main(){
  
int n1 , n2;
printf("informe dois numeros  : ");
scanf("%d %d",&n1,&n2);


calculo(n1,n2);


 }


