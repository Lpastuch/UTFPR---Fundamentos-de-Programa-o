#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define TAM 5


void escreveVetor(int v[TAM]){
	for (int i = 0; i < TAM; ++i)
	{
		printf("%d ", v[i]);
	}
	printf("\n");
}

int main (){
	int crescente[TAM];
	int decres[TAM];
	int aux;

	srand(time(0));

	for (int i = 0; i < TAM; ++i)
	{
		crescente[i] = rand() % 21;
		decres[i] = rand() % 21;
	}

	escreveVetor(crescente);
	escreveVetor(decres);

	for (int i = 0; i < TAM; ++i)
	{
		aux = crescente[i];
		crescente[i] = decres[TAM-1-i];
		decres[TAM-1-i] = aux;
	}
	
	printf("\n\nAs novas ordens agora sao:\n");
	escreveVetor(crescente);
	escreveVetor(decres);

}