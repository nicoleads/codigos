#include <stdio.h>
#include <math.h>

int main() {

    float valor1, desc, valorF;

    printf("Digite o valor da sua compra: ");
    scanf("%f", &valor1);

    printf("Digite o valor do desconto aplicado: ");
    scanf("%f", &desc);

    valorF = valor1 - ((desc/100) *valor1);

    printf("Valor final da sua compra e : %.2f", valorF);


    return 0;

}
