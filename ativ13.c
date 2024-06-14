#include <stdio.h>

int main() {
    int num, cont;

    printf("Digite um numero: ");
    scanf("%i", &num);

    for (cont=num; cont<=num*200; cont++){

        if (cont%7==0){

        printf("%i \n", cont);

        }
    }
    return 0;
}
