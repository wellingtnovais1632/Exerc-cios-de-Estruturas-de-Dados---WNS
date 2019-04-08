#include <stdio.h> //função com passagem de dois parâmetros po ref
//passagem de parâmetro por ref



int troca (int *a,int *b){

	int x;//Variável  aux

	x = *a;
	*a= *b;
	*b = x;
	return (0);
	
}	
main()
{
	int n,k;
	//entrada de dados
	printf("\n\n Digite dois valores inteiros \n");
	scanf("%d %d",&n,&k);
	printf("Antes da troca n= %d e k=%d \n",n,k);
	troca(&n,&k);
	printf("Depois da troca n= %d e k = %d \n ",n,k);
	return (0);
}
