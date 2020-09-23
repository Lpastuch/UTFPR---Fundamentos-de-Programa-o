#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 5

int main (){
	int v[TAM];
	int chute;
	int achou = 0;

	srand(time(0));

	for (int i = 0; i < TAM; ++i)
	{
		int aux = rand() % 21;
		if(aux > 5)
			aux = (aux-5) * -1;	// para fazer os negativos de -1 a -15

		v[i] = aux;
	}

	printf("Qual seu chute?\n");
	scanf("%d", &chute);

	for (int i = 0; i < TAM; ++i)
	{
		if(chute == v[i]){
			printf("ACHEI\n");
			achou = 1;
			break;
		}
	}

	if(!achou)
		printf("NAO ACHEI\n");

	printf("\n Os numeros eram\n");
	for (int i = 0; i < TAM; ++i)
	{
		printf("%d ", v[i]);
	}

}