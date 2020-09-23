#include<stdio.h>
#define ABC 26
#define TAM 100

int main(){
	char letras[ABC];
	char mensagem[TAM];
	int n = TAM;
	int nLetra;

	for (int i = 0; i < ABC; ++i)
	{
		scanf("%c", &letras[i]);		//escaneia o "albabeto"
	}

	while(n > TAM-1){					//n de letras a serem lidas
		scanf("%d", &n);
	}

	for (int i = 0; i < n; ++i)
	{									//guarda o n da letra "piscada" no vetor mensagem
		scanf("%d", &nLetra);
		mensagem[i] = nLetra-1;
	}

	for (int i = 0; i < n; ++i)			//imprime a letra do alfabeto correspondente ao n da mensagem, indo na ordem
	{
		printf("%c", letras[mensagem[i]]);
	}
}