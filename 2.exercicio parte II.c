/*2. Desenvolva um algoritmo em C 
que receba 2 (dois) n�meros inteiros (um positivo outro
negativo)fornecidos pelo usu�rio e atrav�s de 3 (tr�s) mensagens
 em tela seja exibido o retornode tr�s fun��es onde : a primeira 
 retorne a informa��o do dobro destes n�meros e a segunda,
exiba o resultado da multiplica��o entre estes n�meros,
 e a terceira seja verificado e depois
retornado em tela se o resultado da multiplica��o retornada 
pela fun��o anterior ser� positivo
(quando o resultado >1) ou negativo 
(quando o resultado <1). Ap�s compilar e executar tudo ok
, transcreva o algoritmo para o espa�o abaixo.
*/

#include<stdio.h>
#include<conio.h>

main(){
	float imc,peso,altura;
	printf("Informe o seu peso \n");
	scanf("%f",&peso);
	printf("Informe a sua altura \n");
	scanf("%f",&altura);
	imc = (peso/(altura*altura));
	
	if (imc<= 18.5)
		printf("abaixo do peso");
	else if((imc >=18.6)&&(imc<= 24.9))
		printf("Saudave");
		
	else if((imc >=125)&&(imc<= 29.9))
		printf("Peso em exesso");
		
	else if((imc >=30)&&(imc<= 34.9))
		printf("obesidade grau I");
		
	else if((imc >=35)&&(imc<= 39.9))
		printf("obesidade grau II");
	else
	printf("Obesidade grau III");	
}
