#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int dia_hoje, mes_hoje, ano_hoje;
    int dia_nasc, mes_nasc, ano_nasc;
    int idade;

    printf("Qual o dia de hoje (dd/mm/aaaa)?\n\n");
    scanf("%d%d%d", &dia_hoje, &mes_hoje, &ano_hoje);
    printf("\nQual a data de seu nascimento (dd/mm/aaaa)?\n\n");
    scanf("%d%d%d", &dia_nasc, &mes_nasc, &ano_nasc);

    idade = ano_hoje - ano_nasc;

    if(mes_nasc < mes_hoje)
        printf("Idade = %i", idade);

    else if (mes_nasc > mes_hoje){
        idade--;
        printf("Idade = %i", idade);
    }
    else
        if (dia_hoje >= dia_nasc)
        printf("Idade = %i", idade);
        else{
            idade--;
            printf("Idade = %i", idade);
        }

}
