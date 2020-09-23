#include<stdio.h>

int main(){
	int dcem, d10mil, soma, mult;

	for (int i = 1000; i < 10000; ++i)
	{
		dcem = i % 100;
		d10mil = (i - dcem) / 100;
		soma = dcem + d10mil;
		mult = soma * soma;
		if (mult == i)
			printf("%d\n", i);
	}
}