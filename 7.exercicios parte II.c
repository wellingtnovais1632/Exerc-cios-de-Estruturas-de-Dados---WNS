/*7. Desenvolva um algoritmo em C que quando 
o usu�rio informar sua idade, seu nome e seu 
n� de titulo em tela, se sua idade for maior que 18 e tem idade abaixo
 de 70 anos, informe mensagem que o usu�rio � obrigat�rio vota��o, e SE 
 o usu�rio informar idade menor que 
for igual a 16 e maior que 70,
informe em tela que o voto � facultativo. */
#include<stdio.h>

void vot(int idade){

 if((idade > 18 )&& (idade< 70)){
 	printf("Obrigado a votar ");
 	}
	else if (idade == 16){
 		printf("Facultativo");
 	}
	else if (idade >= 70){
	
		printf("Facultativo");
	}
}


main(){
	int idade , titulo;
	char  nome[20];
	
printf("informar sua idade  : ");
scanf("%d",&idade);
printf("informar seu nome  : ");
scanf("%s",&nome);
printf("informar seu titulo  : ");
scanf("%d",&titulo);
printf("**************************** \n");
printf("nome :%s \n",nome);
printf("idade : %d \n",idade);
printf("N� titulo :%d \n",titulo);
vot(idade);


}
