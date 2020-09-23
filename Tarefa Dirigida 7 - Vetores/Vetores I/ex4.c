#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 6

int main (){
	int v[TAM];
	int dado;
	int n = 100;
	

	srand(time(0));

	for (int i = 0; i < TAM; ++i)	// limpa dado
	{
		v[i] = 0;
	}


	for (int i = 0; i < n; ++i)
	{
		dado = (rand() % 6) + 1;
		v[dado-1]++;
	}

	printf("\n\n");
	for (int i = 0; i < TAM; ++i)
	{
		printf("%d\n", v[i]);
	}

}