#include <stdio.h>

int main() {
    float num1, num2, media;
    char opcao;

    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf(" %c", &opcao);

    printf("--------------------------------------------------\n");
    printf("MENU\n");
    printf("--------------------------------------------------\n");
    printf("A – Maior Número\n");
    printf("B – Menor Número\n");
    printf("C – Média Aritmética\n");
    printf("D – Finalizar\n");
    printf("--------------------------------------------------\n");

    switch (opcao) {
        case 'A':
        case 'a':
            if (num1 > num2) {
                printf("%.2f\n", num1);
            } else {
                printf("%.2f\n", num2);
            }
            break;
        case 'B':
        case 'b':
            if (num1 < num2) {
                printf("%.2f\n", num1);
            } else {
                printf("%.2f\n", num2);
            }
            break;
        case 'C':
        case 'c':
            media = (num1 + num2) / 2.0;
            printf("%.2f\n", media);
            break;
        case 'D':
        case 'd':
            printf("Finalizando.\n");
            break;
        default:
            printf("Opcao invalida.\n");
            break;
    }

    return 0;
}