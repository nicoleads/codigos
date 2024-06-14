#include <stdio.h>

int main(){

    float juro=0.05, i, anos, total;

    printf("Digite o valor do seu investimento:\n");
    scanf("%f", &i);
    printf("Digite a quantidade de ano :\n");
    scanf("%f", &anos);

    total=i+(i*juro*anos);
    printf("O valor do investimento ficara %2.f reais", total);

    return 0;
}
