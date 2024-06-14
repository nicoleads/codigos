#include <stdio.h>
#include <math.h>

int main() {
    float cont, fato;

    fato=1;

    for (cont=20; cont>=1; cont--){
        fato=fato*cont;
    }
    printf("%f \n", fato);

    return 0;
}
