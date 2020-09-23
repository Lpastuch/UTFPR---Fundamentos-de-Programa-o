#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 5

int main (){
	int v[N];
	int posicao = 6, qtd;


	srand(time(0));
	for (int i = 0; i < N; ++i)
	{
		v[i] = rand() % 20 + 1;
	}

	printf("\nOs numeros sao:\n");
	for (int i = 0; i < N; ++i)
	{
		printf("%d ", v[i]);
	}


	printf("\n\nQual a posicao que deseja retirar da sequencia?\n");

	while(posicao > N-1){
		scanf("%d", &posicao);
	}
	
	qtd = N - posicao;


	for (int i = 1; i <= qtd; ++i)
	{
		if(posicao < N-1){
			v[posicao] = v[posicao+1];
		}
		posicao++;
	}

	printf("\nOs numeros agora sao\n");
	for (int i = 0; i < N-1; ++i)
	{
		printf("%d ", v[i]);
	}

}