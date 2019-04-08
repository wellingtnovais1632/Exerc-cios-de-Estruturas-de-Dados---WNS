/*2. Desenvolva um algoritmo em C 
que receba 2 (dois) números inteiros (um positivo outro
negativo)fornecidos pelo usuário e através de 3 (três) mensagens
 em tela seja exibido o retornode três funções onde : a primeira 
 retorne a informação do dobro destes números e a segunda,
exiba o resultado da multiplicação entre estes números,
 e a terceira seja verificado e depois
retornado em tela se o resultado da multiplicação retornada 
pela função anterior será positivo
(quando o resultado >1) ou negativo 
(quando o resultado <1). Após compilar e executar tudo ok
, transcreva o algoritmo para o espaço abaixo.
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
