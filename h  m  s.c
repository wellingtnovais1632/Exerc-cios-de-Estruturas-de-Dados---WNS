#include<stdio.h>
/*Escrever uma função
para fazer um programa
que tranform segundos
em horas ,minutos e segundo
EX:11030 = 3h 3m 50seg */


main(){
	int horas,sec,min;
	
	printf("Digite um numero");
	scanf("%d",&sec);
	
	horas = sec/3600;
	min = (sec/60)/60 ;
	sec = sec%60; 
	
	printf("h:%d/m:%d/s:%d",horas,min,sec);
	
	return 0;
	
}




