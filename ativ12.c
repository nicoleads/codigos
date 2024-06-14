#include <stdio.h>

int main() {
    int num, cont;

    printf("Digite um numero de 2 a 9: ");
    scanf("%i", &num);

    for(cont=0; cont<=300; cont++){

    if (cont%num==0){
        printf("%i \n", cont);
    }

        }

    return 0;
}
