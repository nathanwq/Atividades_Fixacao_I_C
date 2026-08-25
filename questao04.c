#include <stdio.h>

int main() {
    float conta, desconto, valorFinal;

    printf("Digite o valor da conta: R$ ");
    scanf("%f", &conta);

    if (conta > 500) {
        desconto = conta * 0.15;
    } else {
        desconto = conta * 0.05;
    }

    valorFinal = conta - desconto;

    printf("Valor original: R$ %.2f\n", conta);
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}