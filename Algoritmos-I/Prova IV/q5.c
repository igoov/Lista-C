#include <stdio.h>
#include <math.h>

int main() {
    double numero;
    double metade;
    double raizCubica;
    int i;

    printf("--- Calculadora de Metade e Raiz Cúbica ---\n");

    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%lf", &numero);
        
        metade = numero / 2.0;
        raizCubica = pow(numero, 1.0 / 3.0);
        
        printf("Metade: %.2lf\n", metade);
        printf("Raiz Cúbica: %.2lf\n", raizCubica);
        printf("----------------------------------------\n");
    }
    
    return 0;
}