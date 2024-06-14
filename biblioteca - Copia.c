#include <stdio.h>


int main() {

  int usuario, quant;

  printf("Qual seu usuario:\n");
  printf("Digite 1 para Aluno\n");
  printf("Digite 2 para Professor\n");
  printf("Digite 3 para Pesquisadores\n");
  printf("Digite 4 para Visitantes\n");
  scanf("%d", &usuario);


  switch (usuario) {

    case 1:
        printf("Digite a quantidade de livros que deseja:\n");
        scanf("%d", &quant);

        if(quant>=1 && quant<=3){
            printf("A quantidade de livros e permitido para o emprestimo");
        }

        else{
            printf("Quantidade nao permitida, seu limite e de ate 3 livros");
        }
    break;


    case 2:
        printf("Digite a quantidade de livros que deseja:\n");
        scanf("%d", &quant);

        if(quant>=1 && quant<=5){
            printf("A quantidade de livros e permitido para o emprestimo");
        }

        else{
            printf("Quantidade nao permitida, seu limite e de ate 5 livros");
        }
    break;


    case 3:
        printf("Digite a quantidade de livros que deseja:\n");
        scanf("%d", &quant);

        if(quant>=1 && quant<=10){
            printf("A quantidade de livros e permitido para o emprestimo");
        }

        else{
            printf("Quantidade nao permitida, seu limite e de ate 10 livros");
        }
    break;

    case 4:
        printf("Digite a quantidade de livros que deseja:\n");
        scanf("%d", &quant);

        if(quant==1){
            printf("A quantidade de livros e permitido para o emprestimo");
        }

        else{
            printf("Quantidade nao permitida, seu limite e de ate 1 livro");
        }

    break;

    default:
    printf("Emprestimo invalido.");

  }


  return 0;

}
