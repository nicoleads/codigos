#include <stdio.h>

int main(){

    float e, meses, total;

    printf("Valores do emprestimo:\n");
    printf("Minimo R$100,00 :\n");
    printf("Maximo R$10.000,00 :\n");
    scanf("%f", &e);

    printf("Qual o prazo do pagamento em meses(max. 36 meses)?");
    scanf("%f", &meses);

    total=e*(1+0.07*meses)/meses;

    printf("O valor do emprestimo ficara %.2f reais", total);

    return 0;
}
