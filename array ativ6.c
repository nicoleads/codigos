#include <stdio.h>

int main () {
    int numeros [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int soma=0;

    for(int i=1; i<=10; i++){
        soma=soma+i;

    }
    printf("a soma dos numeros eh: %d", soma);

    return 0;
}
