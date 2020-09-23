#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int lebrechegou = 0;
int tartachegou = 0;
int chegada = 70;
int sorteado;


int moverTartaruga(int pos);
int moverLebre(int pos);
int sorteio();
void imprimirPosicoes(int posTarta, int posLebre);


int main (){

	int posTarta = 1;
	int posLebre = 1;
	
	srand(time(0));

	imprimirPosicoes(posTarta, posLebre);

	do{

		posLebre = moverLebre(posLebre);
		posTarta = moverTartaruga(posTarta);
		imprimirPosicoes(posTarta, posLebre);

		if (posLebre > 69)
			lebrechegou = 1;
		if (posTarta > 69)
			tartachegou = 1;

	}while(!lebrechegou && !tartachegou);

	if(lebrechegou)
		printf("A Lebre venceu a corrida!!\n");
	else
		printf("A tartaruga venceu a corrida!!\n");
}


int sorteio(){
	int numero;
	numero = rand() % 10 + 1;
	return numero;
}

int moverLebre(int pos){

	int dormindo = 0;
	int salto_grande = 9;
	int salto_pequeno = 1;
	int escorregao_grande = -12;
	int escorregao_pequeno = -2;

	sorteado = sorteio();

	if(sorteado >= 1 && sorteado <= 2){	    //dormindo
		pos += dormindo;
		printf("A lebre dormiu!\n");
	}

	else if(sorteado >= 3 && sorteado <= 4){	//salto grande
		pos += salto_grande; 
		printf("A lebre deu um salto grande!\n");
	}

	else if(sorteado == 5){					//escorregao grande
		pos += escorregao_grande;
		printf("A lebre deu um escorregao grande!\n");
	}

	else if(sorteado >= 6 && sorteado <= 8){	//salto pequeno
		pos += salto_pequeno;
		printf("A lebre deu um salto pequeno!\n");
	}

	else if(sorteado >= 9 && sorteado <= 10){ //escorregao pequeno
		pos += escorregao_pequeno;
		printf("A lebre deu um escorregao pequeno!\n");
	}

	else
		printf("ERRO MOVER LEBRE\n");

	if(pos < 1)
		pos = 1;

	else if(pos > 70 )
		pos = 70;

	return pos;	
}

int moverTartaruga (int pos){

	int caminhada_rapida = 3;
	int escorregao = -6;
	int caminhada_lenta = 1;

	sorteado = sorteio();

	if(sorteado >= 1 && sorteado <= 5){	    //Caminhada rapida
		pos += caminhada_rapida;
		printf("A tartaruga deu uma caminhada rapida!\n");
	}

	else if(sorteado >= 6 && sorteado <= 7){	//Escorregao
		pos += escorregao; 
		printf("A tartaruga deu um escorregao!\n");
	}

	else if(sorteado >= 8 && sorteado <= 10){	//Caminhada lenta
		pos += caminhada_lenta;
		printf("A tartaruga deu uma caminhada lenta!\n");
	}

	else
		printf("ERRO MOVER TARTARUGA\n");

	if(pos < 1)
		pos = 1;

	else if(pos > 70 )
		pos = 70;

	return pos;	


}

void imprimirPosicoes(int posTarta, int posLebre){

	printf("\n");
	printf("A lebre esta na posicao %d/70\n", posLebre);
	printf("A tartaruga esta na posicao %d/70\n", posTarta);

	for (int i = 1; i <= 70; ++i)
	{
		if (posTarta == posLebre && posTarta == i){
			printf("X ");
			continue;
		}

		if (i == posTarta){
			printf("T ");
			continue;
		}

		if (i == posLebre){
			printf("L ");
			continue;
		}

		else
			printf("* ");
	}

 printf("\n\n\n\n");


}
 