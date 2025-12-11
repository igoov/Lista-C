#include <stdio.h>

int main (){

    float n1,n2,n3,n4;
    float p1 = 1, p2 = 2, p3 = 3, p4 = 4;
    float soma = 0;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    printf("Digite a quarta nota: ");
    scanf("%f", &n4);

    soma = ((n1 * p1) + (n2 * p2) + (n3 * p3) + (n4 * p4)) / (p1 + p2 + p3 + p4);

    printf("O resultado e: %.1f\n", soma);

    return 0;
}