#include <stdio.h>


int main() {

  char tam;
  int cafe, mult;

  printf("Qual cafe voce deseja:\n");
  printf("Digite 1 para Cafe Expresso\n");
  printf("Digite 2 para Capuccino\n");
  printf("Digite 3 para Latte\n");
  scanf("%d", &cafe);


  switch (cafe) {

    case 1:
        printf("Digite o tamanho (p,m,g):\n");
        scanf("%s", &tam);

        if(tam=='p'){
            mult=3*1;
            printf("O valor a ser pago e: %d", mult);
        }

       else if(tam=='m'){
            mult=3*2;
            printf("O valor a ser pago e: %d", mult);
        }

        else if(tam=='g'){
            mult=3*3;
            printf("O valor a ser pago e: %d", mult);
        }
    break;


    case 2:
        printf("Digite  o tamanho (p,m,g):\n");
        scanf("%s", &tam);

        if(tam=='p'){
            mult=4*1;
            printf("O valor a ser pago e: %d", mult);
        }

        else if(tam=='m'){
            mult=4*2;
            printf("O valor a ser pago e: %d", mult);
        }

        else if(tam=='g'){
            mult=4*3;
            printf("O valor a ser pago e: %d", mult);
        }
    break;


    case 3:
        printf("Digite o tamanho (p,m,g):\n");
        scanf("%s", &tam);

        if(tam=='p'){
            mult=5*1;
            printf("O valor a ser pago e: %d", mult);
        }

        else if(tam=='m'){
            mult=5*2;
            printf("O valor a ser pago e: %d", mult);
        }

        else if(tam=='g'){
            mult=5*3;
            printf("O valor a ser pago e: %d", mult);
        }

    break;

    default:
    printf("Compra invalida.");

  }


  return 0;

}
