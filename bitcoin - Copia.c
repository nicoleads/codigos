#include <stdio.h>

int main(){

    float bit=0.10, i, meses, total;

    printf("Digite o valor inicial do seu investimento:\n");
    scanf("%f", &i);
    printf("Digite a quantidade de meses que deseja manter o investimento :\n");
    scanf("%f", &meses);

    total=i+(i*bit*meses);
    printf("O valor final do investimento ficara %2.f reais", total);

    return 0;
}
