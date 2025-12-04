#include <stdio.h>

int main (){

    float maca = 0;
    int valor;
    float valorfinal;

    printf("Quantas maca voce quer comprar: ");
    scanf("%d", &valor);

    if (valor < 12) {
        maca = 1.30;
        valorfinal = valor * maca;
        printf("O valor da compra: %.2f\n", valorfinal);
    } else if (valor >= 12) {
        maca = 1.0;
        valorfinal = valor * maca;
        printf("O valor da compra: %.2f\n", valorfinal);
    }
    
    return 0;
    
}