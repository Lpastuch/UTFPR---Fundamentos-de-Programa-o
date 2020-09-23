#include <stdio.h>

int main (){
	int h = 1;
	float custo;

	while (h >= 0){
		printf("Qual o numero de porquinhos da India?\n");
		scanf("%d", &h);
		if (h < 0)
			break;
		custo = ((h * 0.8) / 2) + 10;
		printf("O custo de criar %d porquinhos eh de USD %.2f\n\n", h, custo);
	}

}