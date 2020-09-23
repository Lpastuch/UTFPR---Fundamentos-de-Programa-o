#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 5

void preencheVetor(int v[],  int n){

	for (int i = 0; i < n; ++i)
	{
		v[i] = rand() % 21;
	}
}

void escreveVetor(int v[], int n){
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", v[i]);
	}
	printf("\n");
}

void intercalaVetores(int v1[], int v2[], int v3[], int n){
	
	int j = 0;
	for (int i = 0; i < n*2; ++i)
	{
		if(i % 2 ==0){
			v3[i] = v1[j];
			j++;
		}
	}

	j=0;
	for (int i = 0; i < n*2; ++i)
	{
		if(i % 2 !=0){
			v3[i] = v2[j];
			j++;
		}
	}

}

int main(){
	int v1[TAM];
	int v2[TAM];
	int v3[TAM*2];

	srand(time(0));
	preencheVetor(v1, TAM);
	preencheVetor(v2, TAM);
	escreveVetor(v1, TAM);
	escreveVetor(v2, TAM);

	intercalaVetores(v1, v2, v3, TAM);

	escreveVetor(v3, TAM*2);




}