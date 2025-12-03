#include <stdio.h> 

int main (){ 
    float n1,n2;
    float media = 0;

    printf("Digite o primerio numero: \n");
    scanf("%f", &n1);

    printf("Digite o segundo numero: \n");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    printf("resultado da media: %2.f \n", media);

    return 0;

}