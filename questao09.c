#include <stdio.h>

int main() {
    float compra, desconto, valorDesconto, valorFinal;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &compra);

    if (compra >= 500) {
        desconto = 15;
    } else {
        desconto = 5;
    }

    valorDesconto = compra * (desconto / 100);
    valorFinal = compra - valorDesconto;

    printf("Valor original: R$ %.2f\n", compra);
    printf("Percentual de desconto: %.0f%%\n", desconto);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor final da compra: R$ %.2f\n", valorFinal);

    return 0;
}