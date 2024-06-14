#include <stdio.h>
#include <math.h>

int main() {
    int cont, soma;

    soma=0;

    for (cont=1; cont<=100; cont++){

        if (cont%2==0){
                soma=soma+cont;
        }
    }
    printf("%i", soma);




    return 0;
}
