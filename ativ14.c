#include <stdio.h>

int main() {
    int temp;

    printf("Informe a temperatura: ");
    scanf("%d",&temp);


    if(temp <=15){

        printf("Esta frio, uso roupas quentes.");

    }

    else if(temp>16 && temp<25){

        printf("Esta fresco, use roupas normais.");

    }

    else if(temp>25){

        printf("Esta calor, use roupas mais frescas.");

    }


    return 0;
}
