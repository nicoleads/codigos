#include <stdio.h>
#include <math.h>

int main() {

    float alt, larg,area;

    printf("Digite a altura do seu terreno: ");
    scanf("%f", &alt);

    printf("Digite a largura do seu terreno: ");
    scanf("%f", &larg);

    area= (alt*larg);

    printf("A area do seu terreno e de %.2f", area);

    return 0;

}
