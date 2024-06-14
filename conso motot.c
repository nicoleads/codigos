#include <stdio.h>

int main(){

    float valor,par,conta,vp, vt, c;
    printf("Digite o valor da moto: ");
    scanf("%f", &valor);

    printf("Digite a quantidade de parcelas: ");
    scanf("%f", &par);

    c=valor/par;
    vt=vp*(1+0.02);
    c=vt*par;

    printf("o valor final do consorcio e de %f reais", c);

    return 0;
}
