#include <stdio.h>

int main () {
    int numeros [] = {1,2,3,4,5,6,7,8,9,10};
    float soma=0, media;

    for(int i=1; i<=10; i++){
        soma=soma+i;
        media=soma/10;
        }

    printf("A media dos numeros eh %.1f\n", media);

    return 0;
}
