#include <stdlib.h>
#include <stdio.h>
#define TAM 5

void menormaior(int *vet){//* EST� DANDO ENDERE�O DO VET
	int/ maior,menor,i;
	maior=vet[0];//OS VETORES EST�O SENDO "INICIADOS" COM 0 PRA COME�AR A CONTAR APARTIR DE UM PARAMETRO
	menor=vet[0];
  for (i=0;i<TAM;i++){
 	if(vet[i]>maior){
	 //SE
	 maior=vet[i];
}else if (vet[i]<menor){//ELSE SE SE N�O SE
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
