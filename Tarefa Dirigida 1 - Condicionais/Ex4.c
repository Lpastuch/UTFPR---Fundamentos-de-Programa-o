#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int n1, n2, operacao;
    float resultado, resposta = 0;
    int segundos = 0;
    time_t t_ini, t_fim;

    srand(time(0));
    n1 = rand() % 100 + 1;

    n2 = rand() % 100 + 1;

    operacao = rand() % 4;


    if(operacao == 0 ){
        printf("Quando eh %d mais %d ?\n\n", n1, n2);
        resultado = n1 + n2;
        }
    else if(operacao == 1 ){
        printf("Quando eh %d menos %d ?\n\n", n1, n2);
        resultado = n1 - n2;
        }
    else if(operacao == 2 ){
        printf("Quando eh %d dividido %d ?\n\n", n1, n2);
        resultado = n1 / (float)n2;
        }
    else{
        printf("Quando eh %d vezes %d ?\n\n", n1, n2);
        resultado = n1 * (float)n2;
        }



    t_ini = time(NULL);
        scanf("%f", &resposta);
    t_fim = time(NULL);

    segundos = t_fim - t_ini;

    printf("\n\nDemorou %d segundos\n", segundos);

    if(resultado == resposta)
        printf("\n\n\n----------------Acertou----------------\n\n\n");
    else
        printf("\n\n\nErrou! o resultado era %f\n\n", resultado);

}
