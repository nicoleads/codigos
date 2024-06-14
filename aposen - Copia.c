#include <stdio.h>

int main(){

    int id, aposen, gen, conta;

    printf("Qual e seu genero?\n");
    printf("Digite 1 para feminino\n");
    printf("Digite 2 para masculino\n");
    scanf("%d", &gen);

    switch(gen){

        case 1:
            aposen=62;

            printf("Digite sua idade:\n");
            scanf("%d",&id);

            conta= aposen-id;

            printf("Ainda faltam %d anos para voce aposentar", conta);
        break;

        case 2:
            aposen=65;

            printf("Digite sua idade:\n");
            scanf("%d",&id);

            conta= aposen-id;

            printf("Ainda faltam %d anos para voce aposentar", conta);
        break;
    }

    return 0;
}
