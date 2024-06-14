#include <stdio.h>

int main(){

    int estq, qtd;

    printf("Quantidade de produtos:\n");
    scanf("%d", &qtd);

    if(qtd<= 20){

        printf("compra aceita, voce pode pegar os %d", qtd);
        estq= 20-qtd;
        printf(". Resta agora: %d", estq);

    }

    else{

        printf("compra nao aceita.");

    }

    return 0;

}
