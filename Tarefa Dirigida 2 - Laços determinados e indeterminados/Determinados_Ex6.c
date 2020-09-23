#include<stdio.h>

int main (){
	int n, soma = 0;
	scanf("%d", &n);

	printf("Os divisores sao:\n");
	for (int i = 1; i < n; ++i)
	{
		if((n % i) == 0){
			soma += i;
		printf("%d  \n", i);
		}
	}

	printf("A soma dos divisores eh %d\n", soma);
	if (soma == n)
		printf("O numero eh perfeito!\n");
	else 
		printf("O numero nao eh perfeito\n");


}