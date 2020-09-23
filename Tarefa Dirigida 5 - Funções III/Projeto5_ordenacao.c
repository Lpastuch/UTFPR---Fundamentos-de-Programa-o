#include <stdio.h>

void ordena(int *v1, int *v2, int *v3, int *v4);

void troca(int *a, int *b);

int main(){

	int a1, a2, a3, a4;

	printf("Entre com 4 valores inteiros\n");
	scanf("%d%d%d%d", &a1, &a2, &a3, &a4);

	ordena(&a1, &a2, &a3, &a4);

	printf("Valores ordenados: %d, %d, %d, %d\n", a1, a2, a3, a4);
}


void troca(int *a, int *b){

	int auxiliar;
	auxiliar = *a;
	*a = *b;
	*b = auxiliar;
}

void ordena(int *v1, int *v2, int *v3, int *v4){

	int ordenou = 0;

	while(!ordenou){

		int trocou = 0;

		if(*v1 > *v2){
			troca(v1, v2);
			printf("%d %d %d %d\n", *v1, *v2, *v3, *v4);
			trocou = 1;
		}

		if(*v2 > *v3){
			troca(v2, v3);
			printf("%d %d %d %d\n", *v1, *v2, *v3, *v4);
			trocou = 1;
		}

		if(*v3 > *v4){
			troca(v3, v4);
			printf("%d %d %d %d\n", *v1, *v2, *v3, *v4);
			trocou = 1;
		}

		if(!trocou)
			ordenou = 1;
	}

}