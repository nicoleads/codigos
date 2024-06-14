#include <stdio.h>

int main () {
    int numeros [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int par;

    for(int i=0; i<=9; i++){
         if(numeros [i] %2==0){
            par = numeros[i];
            printf("Os numeros pares sao: %d\n", par);
        }

    }

    return 0;
}
