#include <stdio.h>

int main() {
    int nota, soma = 0, div, med;

    for(int cont=0; cont<6; cont++){

        nota=0;

        printf("Nota: ");
        scanf("%d", &nota);

        soma=soma + nota;
        }
    div= soma/6;

    if (div>=6){
        printf("Aluno aprovado.");
    }

    else if (div<6){
        printf("Aluno reprovado");
    }

    return 0;
}
