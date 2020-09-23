#include <stdio.h>


int main (){
	int m, n, impares, potencia, soma=0, primeiro_impar, qtd;

	scanf("%d", &m);

	for (n = 1; n <= m; n++)
	{
		printf("%d^3 = ", n);

		potencia = n * n * n;

		impares = 1;
		primeiro_impar = 1;

		while(potencia != soma){
			soma = 0;
			while(potencia > soma){     //testa qual o primeiro numero impar
				soma += impares;
				impares += 2;
			}
			if(soma == potencia)		//guarda o primeiro impar
				qtd = primeiro_impar;

			impares = primeiro_impar + 2;
			primeiro_impar += 2;

		}

		soma = 0;
		impares = qtd;

		while(soma != potencia){		//imprime os numeros da soma
			soma += impares;
			if (soma != potencia)
			printf("%d + ", impares);
			impares += 2;

		}

	printf("%d = %d\n", (impares-2), potencia);
		soma = 0;
		
	}


}
