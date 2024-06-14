#include <stdio.h>

int main(){

    int id;
    char aut;

    printf("Digite sua idade: ");
    scanf("%d", &id);

    printf("Voce possui autorizacao: ");
    scanf(" %c", &aut);

    if(id>=16 || (aut=='s' && id >= 14) ){

        printf("Acesso liberado.");

    }

    else{

        printf("Acesso nao liberado.");
    }

    return 0;
}
