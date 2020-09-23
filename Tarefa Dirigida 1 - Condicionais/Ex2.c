#include <stdio.h>

int main (){
    float x, y;

    printf("Digite os valores de x e y \n\n");
    scanf("%f %f", &x, &y);

    if(x == 0){
        if(y == 0)
            printf("Origem \n\n");
        else
            printf("Eixo Y \n\n");
    }

    else if(y == 0)
        printf("Eixo x \n\n");

    else{
        if(x > 0){
            if(y > 0)
                printf("Q1 \n\n");
            else
                printf("Q4 \n\n");
            }
        else{
            if(y > 0)
                printf("Q2 \n\n");
            else
                printf("Q3 \n\n");
            }
        }





}
