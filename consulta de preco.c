#include <stdio.h>

int main(){
    int compra, quant;
    float preco;
    char continuar;

    do{
        printf("Bem-Vindo! Consulte o menu de compras:\n Insira a acao desejada:\n");
        printf("[1] Batata\n[2] Cenoura\n[3] Couve\n[4] Cesta Completa\n[5] Calcular Compra\n");
        scanf("%d", &compra);
        switch (compra){
            case 1:
                printf("R$6.00 kg");
                break;
            case 2:
                printf("R$5.99 kg");
                break;
            case 3:
                printf("R$4.75 kg");
                break;
            case 4:
                printf("Cesta Completa:\n2kg de batata, 1.5kg de cenoura, 1kg de couve, 2 pés de alface e 1.5kg de tomate\nR$46.50");
                break;
            case 5:
                printf("O que foi comprado?\n[1] Batata\n[2] Cenoura\n[3] Couve\n[4] Cesta Completa\n");
                scanf("%d", &compra);
                printf("Quantidade(g, se caso for cesta inserir quantas cestas pegou): ");
                scanf("%d", &quant);
                switch (compra){
                    case 1:
                        preco=0.006;
                        break;
                    case 2:
                        preco=0.00599;
                        break;
                    case 3:
                        preco=0.00475;
                        break;
                    case 4:
                        preco=46.5;
                        break;
                    default:
                        printf("Opcao Invalida!");
                }
                preco=preco*quant;
                printf("Valor total: R$%.2f", preco);
                break;
            default:
                printf("Opcao Invalida!");
        }
        printf("\nDeseja continuar?");
        scanf(" %c", &continuar);
    }while (continuar == 's'||continuar=='S');

    return 0;
}
