#include <stdio.h>


int main() {

  int lados;

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


  return 0;

}
