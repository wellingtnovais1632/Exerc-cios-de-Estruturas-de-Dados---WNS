/*1. Desenvolva um algoritmo em 
C que em fun��o informe ao usu�rio em tela as mensagens :
�VERDADEIRO�: Quando o usu�rio informar n� positivo 
(exemplo: 1,2,3,4,5 );
�FALSO�: Quando o usu�rio informar n� negativo (ex.: -1,-2,-3 etc);
�VOC� PRECISA SELECIONAR UMA DAS OP��ES�:
 Quando o usu�rio informar valor Nulo (0).
 */
 #include<stdio.h>
 
 int numero;
 
 int main(){
 	printf("Digite um numero");
 	scanf("%d",&numero);
 	
 	if(numero<= -1)
 		printf("Negativo");
 		else if(numero > 1)
 			printf("Positivo");
 				else if(numero == 0)
					printf("nulo"); 	
 }
