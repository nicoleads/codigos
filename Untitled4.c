#include <stdio.h>
#include <math.h>

int main() {

    float conta, pes, div;

    printf("Valor da conta: ");
    scanf("%f", &conta);

    printf("Quantidade de pessoas: ");
    scanf("%f", &pes);

    div=(conta/pes);

    printf("O valor que cada pessoa ira pagar e de %.2f", div);

    return 0;

}
