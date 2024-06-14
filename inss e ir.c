#include <stdio.h>

int main(){

    float sal, ir, inss, conta;
    int cal;
    char continuar;


    do{

    printf("o que voce deseja calcular?\n");
    printf("Digite 1 para calcular IR\n Ate R$ 1.903,98: isento\n De R$ 1.903,99 ate R$ 2.826,65: 7,5%\n De R$ 2.826,66 ate R$ 3.751,05: 15%\n");
    printf(" De R$ 3.751,06 ate R$ 4.664,68: 22,5%\n Acima de R$ 4.664,68: 27,5%\n ");
    printf("Digite 2 para calcular INSS\n Ate R$ 1.100,00: 7,5%\n De R$ 1.100,01 ate R$ 2.203,48: 9%\n");
    printf(" De R$ 2.203,49 ate R$ 3.305,22: 12%\n De R$ 3.305,23 ate R$ 6.433,57: 14%\n");
    printf("Digite 3 para calcular IR e INSS\n");
    scanf("%d", &cal);

    switch (cal){

        case 1:
            printf("Digite o valor do seu salario bruto:\n");
            scanf("%f", &sal);

            if (sal<=1903.98){
                printf("Voce nao precisa pagar IR");
            }

            else if (sal>=1903.99 && sal<=2826.65){
                conta=sal-(sal*0.075);
                printf("Seu salario liquido ficara de %.2f reais", conta);
            }
             else if (sal>=2826.66 && sal<=3751,05){
                conta=sal-(sal*0.15);
                printf("Seu salario liquido ficara de %.2f reais", conta);
            }
            else if (sal>=3751,06 && sal<=4664.68){
                conta=sal-(sal*0.225);
                printf("Seu salario liquido ficara de %.2f reais", conta);
            }
            else{
                conta=sal-(sal*0.275);
                printf("Seu salario liquido ficara de %.2f reais", conta);
            }
        break;

        case 2:
            printf("Digite o valor do seu salario bruto:\n");
            scanf("%f", &sal);

            if (sal<=1100){
                conta=sal-(sal*0.075);
                printf("seu salario liquido sera de %.2f reais", conta);
            }
            else if (sal>=1100.01 && sal<=2203.48){
                conta=sal-(sal*0.09);
                printf("Seu salario liquido ficara de %.2f reais", conta);
            }
            else if (sal>=2203.49 && sal<=3305.22){
                conta=sal-(sal*0.12);
                printf("Seu salario liquido ficara de %.2f reais", conta);
            }
            else if (sal>=3305.23 && sal<=6433.57){
                conta=sal-(sal*0.14);
                printf("Seu salario liquido ficara de %.2f reais", conta);
            }
        break;

        case 3:
            printf("Digite o valor do seu salario bruto:\n");
            scanf("%f", &sal);
            printf("Digite o valor do desconto de IR:\n");
            scanf("%f", &ir);
            printf("Digite o valor do desconto de INSS:\n");
            scanf("%f", &inss);
            conta=sal-((sal*(ir/100))-(sal*(inss/100)));

            printf("Seu slaario liquido e de %.2f reais", conta);
        break;

        default:
            printf("Operacao invalida");
    }

    printf("\nDeseja fazer outra conta? (s/n): ");
    scanf(" %c", &continuar);
  } while (continuar == 's' || continuar == 'S');

  printf("Programa finalizado.\n");



    return 0;
}
