#include <stdio.h>
#include <math.h>

int main() {

    float compra, desconto, calculo;

    printf("Valor da sua compra: ");
    scanf("%f", &compra);

    printf("Valor do seu desconto: ");
    scanf("%f", &desconto);

    calculo = compra-(compra*desconto/100);

    printf("Valor da sua compra com desconto e: %f \n", calculo);

    return 0;

}
