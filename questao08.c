#include <stdio.h>

int main() {
    int quantidade;

    printf("Digite a quantidade de produtos em estoque: ");
    scanf("%d", &quantidade);

    if (quantidade < 10) {
        printf("ATENCAO: Estoque baixo. Necessario realizar reposicao.\n");
    }

    return 0;
}