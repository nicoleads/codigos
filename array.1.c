#include <stdio.h>

int main () {
    int numeros [] = {100, 2000, 35, 48, 58, 6, 7, 40, 9, 10};
    int maior = numeros[0];

    for (int i =1; i<10; i++){
        if(numeros [i] > maior){
            maior = numeros[i];
        }
    }
    printf("O maior numero eh: %d\n", maior);

    return 0;
}
