#include <stdio.h>
#include <math.h>

float main(){
    float compra, idade;

    printf("Valor: R$");
    scanf("%f", &compra);
    printf("Idade: ");
    scanf("%f", &idade);
    if(idade>=65){
        printf("Desconto liberado");
    }else{
        printf("Desconto negado");
    }
    compra=compra-(compra*0.1);
    printf("Valor final: R$%.2f", compra);

    return 0;
}
