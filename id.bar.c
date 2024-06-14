#include <stdio.h>

int main(){

    int id;

    printf("Digite sua idade:\n");
    scanf("%d", &id);

    if(id>=18){

        printf("Voce pode entrar.");

    }

    else{

        printf("Voce nao pode entrar no bar.");

    }

    return 0;

}
