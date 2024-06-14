#include <stdio.h>

int main(){

    float real, c, total, taxa=0.20;

    printf("Quantos reais voce deseja converter para dolar: \n");
    scanf("%f", &real);

    c=(real*0.20);
    total=c-taxa;

    printf("O valor total em dolares ficaria %f", total);

    return 0;
}
