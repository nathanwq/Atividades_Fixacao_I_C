#include <stdio.h>

int main() {
    float temperatura;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    if (temperatura < 15) {
        printf("Temperatura baixa.\n");
    } else {
        printf("Temperatura normal ou elevada.\n");
    }

    return 0;
}