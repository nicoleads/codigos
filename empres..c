#include <stdio.h>

int main(){

    int id, r, rend=1500;

    printf("Digite sua idade:\n");
    scanf("%d", &id);

    printf("Digite sua renda mensal:\n");
    scanf("%d", &r);

    if(r==rend && id>=18){

        printf("Voce e legivel para solitar emprestimo.");

    }

    else{

        printf("Voce nao e legivel para solitar emprestimo.");

    }

    return 0;

}
