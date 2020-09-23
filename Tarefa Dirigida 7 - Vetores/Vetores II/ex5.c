#include <stdio.h>
#include <time.h>
#include <stdlib.h>

	srand(time(0));
void preencheVetor(int v[],  int n){

	for (int i = 0; i < n; ++i)
	{
		v[i] = rand() % 101;
	}
}


void ordemCrescente(int v[], int n){

	int ordenou = 0;
	int aux; 

	while(!ordenou){

		int trocou = 0;

		for (int i = 0; i < n-1; ++i){
			
			if(v[i] > v[i+1]){

				aux = v[i];

				v[i] = v[i+1];
				v[i+1] = aux;
				trocou = 1;
			}
		}
		if(!trocou)
			ordenou = 1;
			
	}
}



int main (){

	int n = 20;
	int v[n];

	preencheVetor(v, n);

	for (int i = 0; i < n; ++i)
	{
		printf("%d ", v[i]);
	}

	ordemCrescente(v, n);

	printf("\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", v[i]);
	}

}
