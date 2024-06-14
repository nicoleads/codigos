#include <stdio.h> // biblioteca responsavel por i/o

int main() {

    printf("Digite sua idade");
    scanf("%i", &idade);

    if(idade >= 18) {
        printf("maior de idade");
    }
    else {
        printd("menor de idade");
    }

    return 0;
}
