#include <stdio.h>


int main() {

  int lados;
  char continuar;
  do{

    printf("Digite o numero de lados da figura:  (3,4,5,6):\n");
    scanf("%d", &lados);


    switch (lados) {

        case 3:
            printf("Triangulo.");
        break;


        case 4:
            printf("Quadrado.");
        break;


        case 5:
            printf("Pentagono.");
        break;


        case 6:
            printf("Hexagono.");
        break;

        default:
        printf("Poligono qualquer.");

    }

    printf("\nDeseja ver outro poligono? (s/n): ");
    scanf(" %c", &continuar);
  } while (continuar == 's' || continuar == 'S');

  printf("Programa finalizado.\n");


  return 0;

}
