#include <stdio.h>

int main() {
    int numero;

    scanf("%d", &numero);

    while (numero != -1) {
        if (numero < 0) {
             scanf("%d", &numero);
             continue;
        }

        if (numero % 2 == 0) {
            printf("%d par\n", numero);
        } else {
            printf("%d impar\n", numero);
        }

        scanf("%d", &numero);
    }

    return 0;
}