#include <stdio.h>

int main() {
    float salario, bonus, valorBonus, salarioFinal;

    printf("Digite o salario mensal: R$ ");
    scanf("%f", &salario);

    if (salario < 3000) {
        bonus = 10;
    } else {
        bonus = 5;
    }

    valorBonus = salario * (bonus / 100);
    salarioFinal = salario + valorBonus;

    printf("Salario original: R$ %.2f\n", salario);
    printf("Percentual de bonus: %.0f%%\n", bonus);
    printf("Valor do bonus: R$ %.2f\n", valorBonus);
    printf("Salario final: R$ %.2f\n", salarioFinal);

    return 0;
}