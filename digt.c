#include <stdio.h>

int main(){

    int cod;
    char dig;

    printf("Digite seu codigo: \n");
    scanf("%d", &cod);

    printf("Digite sua digital(a,b,c): \n");
    scanf(" %c", &dig);

    if(cod==123456 && dig=='a'){

        printf("Sistema desativado.");

    }

    else{

        printf("O sistema nao foi desativado.");
    }

    return 0;

}
