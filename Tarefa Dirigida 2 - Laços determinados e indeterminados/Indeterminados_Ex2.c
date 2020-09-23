#include<stdio.h>

int senha = 2002;

int main (){
	int tentativa = 0;

	while (tentativa != senha){
		printf("Digite a senha: \n");
		scanf("%d", &tentativa);
		if (tentativa != senha)
			printf("\n--Senha invalida--\n\n");
	}

	printf("\n\n-----Acesso permitido-----\n");


}