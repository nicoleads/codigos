#include <stdio.h>
int main() {
  int classif, lim, quant;
  char continuar;
  do {
    printf("1 aluno\n2 professor\n3 visitante\n");
    scanf("%d", &classif);
    switch (classif){
        case 1:
            lim=5;
            break;
        case 2:
            lim=10;
            break;
        case 3:
            lim=15;
            break;
        default:
            printf("invalido");
    }
    printf("quantos livros vc pegou?");
    scanf("%d", &quant);
    if(lim>=quant){
        printf("Dentro do limite");
    }else{
        printf("Vc nao pode pegar tudo isso");
    }

    printf("\nDeseja continuar? (s/n): ");
    scanf(" %c", &continuar);
  } while (continuar == 's' || continuar == 'S');

  printf("Programa finalizado.\n");

  return 0;
}
