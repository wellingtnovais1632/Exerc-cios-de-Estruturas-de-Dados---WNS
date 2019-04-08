#include<stdio.h>


main(){
	
	int n1, n2,q=0;
	printf("Digite um numeros inteiro ");
	scanf("%d",&n1);
	
    printf("Digite um numeros inteiro ");
	scanf("%d",&n2);
	
	while(n1!=1){
		n1 = n1/2;
		n2 = n2*2;
		q = q +(n1*n2);	
	}
	printf("O produto dos dois numeros inteiros e positivos e de  : %d",q);
	
}
