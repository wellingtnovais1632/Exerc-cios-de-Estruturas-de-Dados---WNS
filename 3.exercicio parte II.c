#include <stdio.h>
#include <stdlib.h>
int main()

    
{
	 int a,b,i,j;
	 printf("Escreva linha");
	 scanf("%d",&a);// o %d referenciar a vareavele & alocar na memoria
	 printf("Escreva coluna");
	 scanf("%d",&b);
	 
	 int matriz[a][b];// as matriz com "[]" para definir linha e colunas na ordem em questão
	 for (i=0;i<a;i++){
	 	for(j=0;j<b;j++){
	 		printf("Informe linha %d coluna %d: ",1+i,1+j);
	 		scanf("%d",&matriz[i][j]);
	 		
		 }
	 }
	 for (i=0;i<a;i++){
	 	
	 	
	 	for(j=0;j<b;j++){
	 		printf("\n linha %d coluna %d:%d ",1+i,1+j,matriz[i][j]);//para mostrar cada linha e coluna
	 	
	 		
		 }
	 }
	   
     return 0;
}
