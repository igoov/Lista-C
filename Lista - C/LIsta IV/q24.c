#include <stdio.h>

int main() {

    int a1, a2, atual;

    printf("Digite o primeiro termo: ");
    scanf("%d", &a1);

    printf("Digite o segundo termo: ");
    scanf("%d", &a2);

    printf("A1 = %d\n", a1);
    printf("A2 = %d\n", a2);

    int anterior2 = a1;
    int anterior1 = a2;

    for (int i = 3; i <= 20; i++) {

        if (i % 2 == 1) {
            atual = anterior1 + anterior2;
        } else {
            atual = anterior1 - anterior2;
        }

        printf("A%d = %d\n", i, atual);

        anterior2 = anterior1;
        anterior1 = atual;
    }

    return 0;
}
