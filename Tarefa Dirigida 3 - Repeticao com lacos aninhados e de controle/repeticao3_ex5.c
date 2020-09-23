#include<stdio.h>

int main (){
	int n, num;
	int numant = 0, nao=0;

	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &num);

		if(num < numant)
			nao=1;

		numant = num;
	}

	if(nao)
		printf("nao\n");
	else
		printf("sim\n");

}