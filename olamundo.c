#include <stdio.h>

int main() {
    int emprestimo = 100000;

    if(emprestimo <= 50000){// aparece 1 vez
        printf("Liberado at� 50k");
    }

    else if (emprestimo > 50000 && emprestimo <= 100000){// repete n vezes
        printf("Liberado at� 100k");
    }

    else{ // aparece uma vez
        printf ("N�o autorizado");
    }

    return 0;
}
