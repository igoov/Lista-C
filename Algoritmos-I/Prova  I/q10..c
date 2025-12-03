#include <stdio.h>

int main() {
    float base, altura, perimetro;

    printf("Digite a base do retangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    perimetro = 2 * (base + altura);

    printf("O perimetro do retangulo é: %.2f\n", perimetro);

    return 0;
}
