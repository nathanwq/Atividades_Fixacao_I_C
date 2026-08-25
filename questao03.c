#include <stdio.h>

int main() {
    float orcamento;

    printf("Digite o orcamento: R$ ");
    scanf("%f", &orcamento);

    if (orcamento >= 10000) {
        printf("Viagem internacional.\n");
    } else {
        printf("Viagem nacional.\n");
    }

    return 0;
}