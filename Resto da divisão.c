#include<stdio.h>
/*Consrtuir uma função
que retorne o resto de
de uma divisão inteira 
entre dois numeros int*/


int main(){
	int n1, n2, r ;
	printf("Digite dois numeros inteiros ");
	scanf("%d %d",&n1 ,&n2);
	
	r = n1%n2;
	
	printf("O resto  da divisao entre (n1: %d e n2: %d  = %d )",n1,n2 , r);
	return 0;	
}
