#include <stdio.h>
#include <math.h>

int main() {

    float peso, alt, imc;

    printf("Seu peso: ");
    scanf("%f", &peso);

    printf("Sua altura: ");
    scanf("%f", &alt);

    imc = peso / (alt*alt);

    if (imc <=16.9){
        printf("Muito abaixo do peso.");
    }

    else if (imc>=17 && imc<= 18.4){
        printf("Abaixo do peso.");
    }

    else if (imc>=18.5 && imc<= 24.9){
        printf("Peso normal");
    }

    else if (imc>=25 && imc<=29.9){
        printf("Acima do peso");
    }

    else if (imc>=30 && imc<=34.9){
        printf("Obesidade grau 1");
    }

    else if(imc>=35 && imc<=40){
        printf("Obesidade grau 2");
    }

    else if (imc>=40){
        printf("Obesidade grau 3");
    }

    return 0;

}
