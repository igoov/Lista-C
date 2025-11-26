#include <stdio.h>

int main() {
    float a1, d, n, soma;

    printf("Digite o primeiro termo (a1): ");
    scanf("%f", &a1);

    printf("Digite a razao (d): ");
    scanf("%f", &d);

    printf("Digite a quantidade de termos (n): ");
    scanf("%f", &n);

    soma = (n / 2) * (2 * a1 + (n - 1) * d);

    printf("A soma da PA é: %.2f\n", soma);

    return 0;
}
