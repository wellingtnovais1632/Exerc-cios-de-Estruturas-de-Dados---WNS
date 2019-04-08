/*1. Desenvolva um algoritmo em 
C que em função informe ao usuário em tela as mensagens :
“VERDADEIRO”: Quando o usuário informar nº positivo 
(exemplo: 1,2,3,4,5 );
“FALSO”: Quando o usuário informar nº negativo (ex.: -1,-2,-3 etc);
“VOCÊ PRECISA SELECIONAR UMA DAS OPÇÕES”:
 Quando o usuário informar valor Nulo (0).
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
