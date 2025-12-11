#include <stdio.h>

int main() {
    int N;
    int contador = 0;
    float numero;
    float somatorio = 0.0;
    float maior;
    float menor;

    scanf("%d", &N);

    if (N <= 0) {
        return 1;
    }

    while (contador < N) {
        scanf("%f", &numero);

        if (contador == 0) {
            maior = numero;
            menor = numero;
        } else {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }

        somatorio += numero;
        contador++;
    }

    printf("%.2f\n", somatorio);
    printf("%.2f\n", maior);
    printf("%.2f\n", menor);

    return 0;
}