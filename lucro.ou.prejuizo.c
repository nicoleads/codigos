#include <stdio.h>

int main(){

    float conta, valorI, valorA;

    printf("Insira o valor inicial do seu investimento:\n");
    scanf("%f", &valorI);

    printf("Insira o valor atual do seu investimento:\n");
    scanf("%f", &valorA);
    conta= (valorA-valorI);

    if(conta>0){
        printf("Voce teve lucro de %2.f reais", conta);
    }

    else if(conta==0){
        printf("Voce nao teve lucro pois o valor continuou o mesmo");
    }

    else{
        printf("Voce teve um prejuizo de %2.f reais", conta);
    }

}
