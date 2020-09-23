#include<stdio.h>



int main(){
	int numero = 21;
	int achou = 0;
	int divisivel = 1;
	int divisao;


	while(!achou){
		for (int i = 1; i <= 20; ++i)
		{
			divisao = numero % i;
			if(divisao > 0){
				divisivel = 0;
				break;
			}
		}

		if(divisivel){
			achou = 1;
		}

		else if(!divisivel){
			numero++;
			divisivel = 1;
		}
	}

	printf("%d\n", numero);

}