#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 6

int main (){
	int v[TAM];
	int chute;
	int inserido = 0;
	int jaTem = 0;

	srand(time(0));

	for (int i = 0; i < (TAM-1); ++i)
	{
		v[i] = rand() % 20 + 1;
	}

	printf("\nOs numeros sao:\n");
	for (int i = 0; i < (TAM -1); ++i)
	{
		printf("%d ", v[i]);
	}


	printf("\n\nQue numero deseja inserir na sequencia?\n");

	do{
		scanf("%d", &chute);

		jaTem = 0;
		for (int i = 0; i < (TAM-1); ++i)
		{
			if(v[i] == chute){
				jaTem = 1;
				printf("Esse numero ja esta na sequencia!\n");
				break;
			}
		}

		if(!jaTem){
			v[5] = chute;
			inserido = 1;
		}

	}while(!inserido);

	printf("\nOs numeros agora sao\n");
	for (int i = 0; i < TAM; ++i)
	{
		printf("%d ", v[i]);
	}

}