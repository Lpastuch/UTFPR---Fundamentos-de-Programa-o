#include<stdio.h>

int main(){
    int ano, aux;

    printf("Digite o ano\n");
    scanf("%i", &ano);

    int d400 = ano % 400;
    int d100 = ano % 100;
    int d4 = ano % 4;

    if(d400 == 0){
        printf("\nO ano eh bissexto \n\n");
    }

    else if(d4 == 0 && d100 != 0){
        printf("\nO ano eh bissexto \n\n");
    }

    else{
        printf("\n O ano nao eh bissexto \n\n");
    }

}
