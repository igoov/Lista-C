#include <stdio.h>

int main() {
    float r, area;
    const float PI = 3.14159;

    printf("Digite o raio do circulo: ");
    scanf("%f", &r);

    area = PI * r * r;

    printf("A area do circulo é: %.2f\n", area);

    return 0;
}
