#include <stdio.h>

int main ()
{
    int a, b;

    printf("Escreva um numero para a: ");
    scanf("%d", &a);

    printf("Escreva outro numero para b: ");
    scanf("%d", &b);

    if (a>b){
        printf("a e maior que b");
    }

    else{
        printf("b e maior que a");
    }


    return 0;

}
