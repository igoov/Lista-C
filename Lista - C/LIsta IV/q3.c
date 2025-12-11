#include <stdio.h>

int main() {
    int N = 3;
    int inicio = 12; 
    int fim = 30;    

    printf("Múltiplos de %d de 10 a 30:\n", N);

    for (int i = inicio; i <= fim; i = i + N) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}