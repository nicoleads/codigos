#include <stdio.h>

int main(){

    char us[10];
    int id;

    printf("Digite seu usuario:\n");
    scanf("%s", &us);

    printf("Digite sua idade:\n");
    scanf("%d", &id);

    if(strcmp(us, "usuario123")== 0 && id>=18){

        printf("Cadastro realizado.");

    }

    else{

        printf("Nao foi possivel realizar o cadastro.");

    }

    return 0;

}
