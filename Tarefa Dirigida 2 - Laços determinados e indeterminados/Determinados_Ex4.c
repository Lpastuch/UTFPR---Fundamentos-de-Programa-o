#include <stdio.h>

int main (){
	int ntestes;
	float m1, m2, m3, media;

		printf("Digite o numero de testes\n");
		scanf("%d", &ntestes);

		for (int i = 0; i < ntestes; ++i)
		{
				printf("Digite os 3 valores para a media\n");
				scanf("%f %f %f", &m1, &m2, &m3);
				media = ((m1 * 2) + (m2 * 3) + (m3 * 5)) / 10;
				printf("A media eh %.2f\n", media);
		}


}