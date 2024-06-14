#include <stdio.h>

int main(){

    float comp, desc;
    int id;

    printf("Valor da sua compra:\n");
    scanf("%f", &comp);


    printf("Digite sua idade:\n");
    scanf("%d", &id);

    if(id>=65 && comp>=130){

        desc= 0.10*comp;
        comp=comp-desc;
        printf("Voce ganhou 10 de desconto, sua compra deu: %.2f",comp);

    }

    else{

        printf("Voce nao recebeu desconto.");

    }

    return 0;

}
