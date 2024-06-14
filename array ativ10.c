#include <stdio.h>

int main () {
    char p1[30], p2[30];
    int tam1, tam2;

    printf("Digite uma palavra: \n");
    scanf("%s", &p1);

    printf("Digite outra palavra: \n");
    scanf("%s", &p2);

    tam1= strlen (p1);
    tam2= strlen(p2);

    if (tam1==tam2){
        printf("As palavras tem o mesmo tamanho");
    }

    else{
        printf("As palavras nao tem o mesmo tamanho");
    }

    return 0;
}
