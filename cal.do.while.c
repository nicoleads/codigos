#include <stdio.h>


int main() {

  char operacao, continuar;
  float num1, num2, soma, sub, div, mult;
  do{

    printf("Digite a operacao desejada (+, -, *, /): \n");
    scanf(" %c", &operacao);

    printf("Digite um numero: \n");
    scanf("%f", &num1);
    printf("Digite um numero: \n");
    scanf("%f", &num2);


    switch (operacao) {

        case '+':
            soma=(num1+num2);
            printf("O resultado e: %2.f", soma);
        break;


        case '-':
            sub=(num1-num2);
            printf("O resultado e: %2.f", sub);
        break;


        case '*':
            mult=(num1*num2);
            printf("O resultado e: %2.f", mult);
        break;


        case '/':
            div=(num1/num2);
            printf("O resultado e: %2.f", div);
        break;


        default:
        printf("Operacao invalida!\n");


     }

    printf("\nDeseja fazer outra conta? (s/n): ");
    scanf(" %c", &continuar);
  } while (continuar == 's' || continuar == 'S');

  printf("Programa finalizado.\n");

    return 0;
}
