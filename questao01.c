#include <stdio.h>

int main() {
    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero >= 0) {
        printf("O numero %.2f e POSITIVO.\n", numero);
    } else {
        printf("O numero %.2f e NEGATIVO.\n", numero);
    }

    return 0;
}