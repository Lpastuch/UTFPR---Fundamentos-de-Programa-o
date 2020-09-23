#include<stdio.h>

int main(){
	int n, resto;
	int soma=0;


	for (int i = 0; i < 10; ++i)
	{

		do{							//le os numeros
			scanf("%d", &n);
			if(n <= 0)
			printf("O numero nao pode ser negativo ou zero\n");

		}while(n < 0);

		for (int j = 2; j < n; ++j)		// se n>2 testa se eh primo
		{
			resto = n % j;

			if(resto == 0){			// nao eh primo
				break;
			}
		}

		if(resto > 0){			// soma o primo
			soma += n;
		}

		resto = 0;
	}

	printf("%d\n", soma);
}