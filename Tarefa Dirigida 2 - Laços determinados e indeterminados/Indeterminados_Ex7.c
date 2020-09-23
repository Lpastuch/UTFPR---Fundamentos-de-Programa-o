#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main (){
	int chute, numerosecreto, tentativas = 0;

	srand(time(0));

	numerosecreto = rand() % 500 + 1;

	do {
		printf("Qual o seu chute?\n");
		scanf("%d", &chute);
		tentativas++;
		if (chute > numerosecreto){
			printf("O chute eh maior que o numero secreto\n\n");
		}
		else if (chute < numerosecreto){
			printf("O chute eh menor que o numero secreto\n\n");
		}
	} while (chute != numerosecreto);


		if (tentativas <= 3){
			printf("\n\nVoce acertou em %d tentativas \\o/ \n", tentativas);
		}

		else if (tentativas <= 6){
			printf("\n\nVoce acertou em %d tentativas :-D \n", tentativas);
		}

		else if (tentativas <= 10){
			printf("\n\nVoce acertou em %d tentativas :-) \n", tentativas);
		}

		else{
			printf("\n\nVoce acertou em %d tentativas :-\\ \n", tentativas);
		}

}