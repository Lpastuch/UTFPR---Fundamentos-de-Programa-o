#include<stdio.h>


int main (){
	int n=-1, num, numant=-1;
	int ehcrescente=-1, ehdecrescente=0;

	while(n < 0){
		scanf("%d", &n);
	}

	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &num);

		if(numant > num)
			ehdecrescente++;
		else if(numant < num)
			ehcrescente++;

		numant = num;
	}

	if(ehdecrescente > 0 && ehcrescente > 0)
		printf("Desordenada\n");
	else if(ehcrescente > 0)
		printf("Crescente\n");
	else
		printf("Decrescente\n");

}