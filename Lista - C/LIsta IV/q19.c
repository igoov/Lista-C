#include <stdio.h>

int main() {
    int N;
    long long fatorial = 1;
    int i;

    scanf("%d", &N);

    if (N < 0) {
        printf("Numero negativo. Fatorial nao definido.\n");
        return 0;
    }

    if (N == 0) {
        printf("1\n");
        return 0;
    }

    for (i = 1; i <= N; i++) {
        fatorial *= i;
    }

    printf("%lld\n", fatorial);

    return 0;
}