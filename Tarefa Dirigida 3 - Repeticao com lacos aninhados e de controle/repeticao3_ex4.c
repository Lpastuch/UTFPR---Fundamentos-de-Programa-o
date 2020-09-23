#include<stdio.h>

int main(){
	int n = 0, num; 
	int x=1;

	while(n <= 0){
		scanf("%d", &n);
	}


	for (int i = 1; i <= n; ++i)   //cabeçalho
		{
			printf("  %d", i);
		}	
		printf("\n");


	for (int i = 0; i < n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			num = j * x;
			if(num < 10)
			printf("  %d", num);
			else
			printf(" %d ", num);
		}
		x++;
		printf("\n");
	}

}