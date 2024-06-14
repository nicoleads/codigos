#include <stdio.h>
#include <math.h>

int main() {

    float horas, salario;

    printf("Quantidade de horas trabalhadas:" );
    scanf("%f", &horas);

    salario = (horas*48);

    printf("Seu salario e de R$ %.2f \n", salario);


    return 0;

}
