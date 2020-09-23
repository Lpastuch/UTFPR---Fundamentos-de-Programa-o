#include <stdio.h>
#include <time.h>
#include <stdlib.h>

srand(time(0));
void preencheVetor(int v[],  int n){
	
	for (int i = 0; i < n; ++i)
	{
		v[i] = rand() % 11;
	}
}
