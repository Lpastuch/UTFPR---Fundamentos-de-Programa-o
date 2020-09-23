#include <stdio.h>


int main (){
	int x=0;
	int m, n;

	printf("Digite m e n\n");
	scanf("%d %d", &m, &n);

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			x = i * j;
			if (x < 10)			//para deixar a impressao mais bonita, para numeros até 100
			printf("%d   ", x);
			else
			printf("%d  ", x); 
		}
		printf("\n");
	}


}