#include <stdio.h>
int main() {
  int preco,tip, tam;

  printf("1 cafe expresso\n2 capuccino\n3 latte\n ");
  scanf("%d", &tip);
  printf("1 pequeno\n2medio\n3 grande");
  scanf("%d", &tam)
  switch (tip) {
    case 1:
        preco=3;
      break;
    case 2:
        preco=4;
      break;
    case 3:
        preco=5;
      break;
    default:
      printf("opcao invalida\n");
  }
  switch(tam){
    case 1:
        tam=1;
        break;
    case 2:
        tam=2;
        break;
    case 3:
        tam=3;
        break;
    default:
        printf("opcao invalida");
  }
    preco=preco*tam;
    printf("%d", preco);

  return 0;
}
