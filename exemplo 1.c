#include <stdio.h>

  int fatorial (int n)
  {
	int i, fat;
	fat=1;
	for (i=1;i<=n;i++)

		fat*=i; /*fat = fat * i; */
		printf("\nFatorial de %d = %d\n",n,fat);
		return 0;

  }

main ()
  {

     int limite;
     char tecla;
	printf("\n\nCalculo de fatorial\n");
	printf("\nQual fatorial: ");
	scanf("%d",&limite);
	fatorial(limite);
	printf("Tecle <ENTER> para finalizar");
	tecla = getche();
	return 0;

  }

