#include<stdio.h>

int main (){
	int n, mult = 0, x = 0;

	while(n <= 0){
		scanf("%d", &n);
	}

	if (n < 6){
		printf("O numero nao eh triangular\n");
	}


	else{
		while(mult < n){
			x++;
			mult = x * (x+1) * (x+2);
		} 

		if(mult == n)
			printf("O numero eh triangular %d x %d x %d = %d\n", (x), (x+1), (x+2), mult);
		else
			printf("O numero nao eh triangular  %d x %d x %d = %d\n", (x), (x+1), (x+2), mult);
	}

}