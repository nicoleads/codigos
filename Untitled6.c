#include <stdio.h>
#include <math.h>

int main() {

    float salB,salL, des;

    printf("Digite o seu salario: ");
    scanf("%f", &salB);

    if (salB <= 1412.00){
        des = 0.075;
        salL = salB-(salB*des);
        printf("Seu salario com desconto e: %.2f ", salL);
    }

    else if (salB >= 1412.01 && salB <= 2666.68){
        des = 0.09;
        salL = salB-(salB*des);
        printf("Seu salario com desconto e: %.2f", salL);
    }

    else if (salB >= 2666.69 && salB <= 4000.03){
        des = 0.12;
        salL = salB-(salB*des);
        printf("Seu salario com desconto e: %.2f", salL);
    }

    else if(salB >= 4000.04 && salB <=7786.02){
        des = 0.14;
        salL = salB-(salB*des);
        ("Seu salario com desconto e: %.2f", salL);
    }


    return 0;

}
