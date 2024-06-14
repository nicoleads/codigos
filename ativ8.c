#include <stdio.h>

int main() {
    int nota, soma = 0, div;

    for(int cont=0; cont<6; cont++){

        nota=0;

        printf("Nota: ");
        scanf("%d", &nota);

        soma=soma + nota;
        }
    div= soma/6;

    printf("Media = %d", div);

    return 0;
}
