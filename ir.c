#include <stdio.h>

int main(){

    float sal, ir;
    printf("digite o seu salario bruto:\n");
    scanf("%f", &sal);

    ir=sal*0.15;

    printf("O valor do importo e de %f reais", ir);

    return 0;
}
