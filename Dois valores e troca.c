#include<stdio.h> //programa principal
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
