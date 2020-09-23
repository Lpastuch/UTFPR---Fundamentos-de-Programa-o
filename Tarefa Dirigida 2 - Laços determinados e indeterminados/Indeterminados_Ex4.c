#include <stdio.h>

int main (){
	float chico = 1.5,
		  ze = 1.1;
	float cres_chico = 0.02,
		  cres_ze = 0.03;
	int anos;

	while(chico > ze){
		chico += cres_chico;
		ze += cres_ze;
		anos++;
	}

	printf("%d anos para que Ze fiquei maior que Chico\n", anos);


}