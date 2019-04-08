/*passagem de parâmetros por referência*/
#include<stdio.h>
#include<conio.h>

int troca(int *a, int *b)
{/*Definição de ponteiros que
 recebem valores dos vetores*/
 
 int x;
 if(*a>*b){
 	x= *a;
 	*a = *b;
 	*b = x;
}
return 0; 
}

main(){
	int vetor[9],i,j;
	char tecla ;
	printf("\n\n Ordenacao de vetor\n\n");
/*entrada de dados*/
for(i=0;i<=9;i++)
{
	printf("Entro com o %d do.elemento: ",i+1);
	scanf("%d",&vetor[i]);
	
}
	


/*Ordenação do Vetor*/
for(i= 0;i<=9;i++)
for(j=i+1;j<=9;j++)
	troca(&vetor[i],&vetor[j]);
/*Apresentação do vetor ordenado*/
for (i = 0;i<=9;i++)
	printf("\n %d do. elemento: %d",i+1,vetor[i]);
	system("Pause");
	return 0;
}
