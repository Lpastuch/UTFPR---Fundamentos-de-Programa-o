#include <stdio.h>

int main()
{
	int n1=0, n2=1, n3,
		qtd;
	scanf("%d", &qtd);

	if (qtd == 2)
	printf("0 1 ");

	else if(qtd == 1)
	printf("0");

	else{
		printf("0 1 ");
		for (int i = 2; i < qtd; ++i)
		{
			n3 = n2 + n1;
			printf("%d ", n3);
			n1 = n2;
			n2 = n3;
		}
	}





}