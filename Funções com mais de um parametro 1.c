#include<stdio.h>
int  mult(float a,float b, float c)
{//multiplica 3 numeros
	printf("%f",a*b*c);
}

main()
{
	float x,y;
	x = 23.5;
	y = 12.9;
	
	mult(x,y,3.87);
	printf("%d",mult);
	return 0;
	
}
