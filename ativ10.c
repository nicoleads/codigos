#include <stdio.h>

int main() {
    int num, mult, cont;

    printf("Insira um numero: ");
    scanf("%d", &num);

    for(cont=1; cont<=10; cont++){

        mult=num*cont;

        printf("%d \n", mult);
    }

    return 0;
}
