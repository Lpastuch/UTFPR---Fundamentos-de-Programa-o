#include<stdio.h>


int main (){
	int n, equacao;

	scanf("%d", &n);

	for (int i = -n; i <= n; i++)
	{
		equacao = (i * i) + i + 1;
		printf("%d ", i);
		for (int j = 0; j < equacao; ++j)
		{
			printf(".");
		}
		printf("*\n");
	}




}