#include <stdio.h>
int main() {
  int numeroTabuada;
  char continuar;
  do {
    printf("Digite o numero para ver a tabuada: ");
    scanf("%d", &numeroTabuada);

    if (numeroTabuada == 0) {
      break; // Sair do loop se o usuário digitar 0
    }
    printf("\nTabuada de %d:\n", numeroTabuada);

    for (int i = 1; i <= 10; i++) {
      printf("%d x %d = %d\n", numeroTabuada, i, numeroTabuada * i);
    }

    printf("\nDeseja ver outra tabuada? (s/n): ");
    scanf(" %c", &continuar);
  } while (continuar == 's' || continuar == 'S');

  printf("Programa finalizado.\n");

  return 0;
}
