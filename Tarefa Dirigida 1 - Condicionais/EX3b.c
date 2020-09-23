#include <stdio.h>

int main(){

    int dia_hoje, mes_hoje, ano_hoje;
    int dia_nasc, mes_nasc, ano_nasc;
    int idade;
    int dia_semana;

    printf("Qual o dia de hoje (dd/mm/aaaa)?\n\n");
    scanf("%d%d%d", &dia_hoje, &mes_hoje, &ano_hoje);
    printf("\nQual a data de seu nascimento (dd/mm/aaaa)?\n\n");
    scanf("%d%d%d", &dia_nasc, &mes_nasc, &ano_nasc);

    idade = ano_hoje - ano_nasc;
    dia_semana = (dia_nasc + (((mes_nasc+1)*13)/5) + (ano_nasc % 100) + ((ano_nasc % 100)/4) + (ano_nasc/400) + (5 * (ano_nasc/100)) ) % 7 ;
    printf("\n\n");

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

    // usei switch pq muitos if's fica muito "sujo"
    switch(dia_semana){
        case 0: printf("\nNasceu em um sábado");
                break;
        case 1: printf("\nNasceu em um domingo");
                break;
        case 2: printf("\nNasceu em um segunda");
                break;
        case 3: printf("\nNasceu em um terca");
                break;
        case 4: printf("\nNasceu em um quarta");
                break;
        case 5: printf("\nNasceu em um quinta");
                break;
        case 6: printf("\nNasceu em um sexta");
                break;
    }


}
