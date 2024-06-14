#include <stdio.h>

int main () {
    int numeros [] = {1,2,3,4,5,6,7,8,9,10};
    int menor = numeros[0];

    for (int i =1; i<10; i++){
        if(numeros [i] < menor){
            menor = numeros[i];
        }
    }
    printf("O menor numero eh: %d\n", menor);

    return 0;
}
