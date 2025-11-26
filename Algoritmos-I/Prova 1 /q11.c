#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, dx, dy, distancia;

    printf("Digite x1: ");
    scanf("%f", &x1);

    printf("Digite y1: ");
    scanf("%f", &y1);

    printf("Digite x2: ");
    scanf("%f", &x2);

    printf("Digite y2: ");
    scanf("%f", &y2);

    dx = x2 - x1;
    dy = y2 - y1;

    distancia = sqrt(dx*dx + dy*dy);

    printf("A distancia euclidiana é: %.2f\n", distancia);

    return 0;
}
