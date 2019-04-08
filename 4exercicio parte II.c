#include <stdlib.h>
#include <stdio.h>
#define TAM 5

void menormaior(int *vet){//* ESTÁ DANDO ENDEREÇO DO VET
	int/ maior,menor,i;
	maior=vet[0];//OS VETORES ESTÃO SENDO "INICIADOS" COM 0 PRA COMEÇAR A CONTAR APARTIR DE UM PARAMETRO
	menor=vet[0];
  for (i=0;i<TAM;i++){
 	if(vet[i]>maior){
	 //SE
	 maior=vet[i];
}else if (vet[i]<menor){//ELSE SE SE NÃO SE
	menor=vet[i];
}
 }
 printf("\nmenor=%d,maior=%d",menor,maior);	

}


int main()


    
{
//macro vareavel
int vetor[TAM],i;
 for (i=0;i<TAM;i++){
 	printf("Insira valor %d: ",i);
 	scanf("%d",&vetor[i]);
 }
for (i=0;i<TAM;i++){
 	printf("\nValor %d: %d",i,vetor[i]);
 }
 menormaior(vetor);
	   
     return 0;
}
