#include <stdio.h>


int main() {

  int boot;
  char continuar;

  do{

    printf("Ola seja bem vindo a nossa biblioteca.\n");
    printf("Digite 1 para: ver livros disponiveis.\n");
    printf("Digite 2 para: Contato da biblioteca.\n");
    printf("Digite 3 para: Cadastro.\n");
    printf("Digite 4 para: emprestimo de livros.\n");
    scanf("%d", &boot);

        switch(boot){

        case 1:
            printf("Veja a seguir os livros disponiveis:\n");
            printf("O Codigo Da Vinci - cod 2829\n");
            printf("E Assim Que Acaba- cod 7869\n");
            printf("Verity- cod 3627\n");
        break;

        case 2:
            printf("Contato da biblioteca:\n");
            printf("14 99987-0268;\n");
            printf("Email: bibloteca@gmail.com\n");
        break;

        case 3:
            printf("Para ralizar o cadastro, sera preciso das seguintes informações:\n");
            printf("CPF \n");
            printf("Email \n");
            printf("Telefone \n");
        break;

        case 4:
            printf("Seu emprestimo foi realizado! \n");
            printf("Suas imformacoes para entrega:\n");
            printf("Voce tem ate dia 27 de maio para devolucao. Caso atrase devera ser pago um taxa.\n");
            printf("CPF: 526.372.890.87");
        break;

        default:
            printf("Erro no sistema.");
        break;

        }

        printf("\nDeseja fazer mais alguma coisa? (s/n): ");
        scanf(" %c", &continuar);
        } while (continuar == 's' || continuar == 'S');

          printf("Programa finalizado.\n");


    return 0;
  }

