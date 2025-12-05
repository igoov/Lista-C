#include <stdio.h>

int main() {
    int A;
    int B;
    long long resultado = 1; 
    int i;

    printf("--- Calculo de Potencia (A^B) ---\n");
    printf("Digite a base (A): ");
    scanf("%d", &A);
    printf("Digite o expoente (B, nao negativo): ");
    scanf("%d", &B);

    if (B < 0) {
        printf("Este codigo trata apenas de expoentes nao negativos.\n");
        return 1;
    }
    
    if (B == 0) {
        resultado = 1;
    } else {
        for (i = 0; i < B; i++) {
            resultado = resultado * A;
        }
    }

    printf("%d elevado a %d e: %lld\n", A, B, resultado);
    
    return 0;
}