#include<stdio.h>

int main (){
	int n, k;
	int nprimos=0;
	int teste, ehprimo = 1;

	do{
		printf("Digite os valores de n e k\n");
		scanf("%d %d", &n, &k);
	}while (n <= 0 || k <= 0);
	
	while(nprimos < n)
	{
		for (int i = 2; i < k; ++i)
		{
			if((k%i) == 0){
				ehprimo = 0;
				break;}
		}

		if(ehprimo){
			nprimos++;
			printf("%d ", k);
		}
		k++;
		ehprimo = 1;
	}
}