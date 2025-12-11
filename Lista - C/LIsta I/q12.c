#include <stdio.h>

//errei apenas o o sinal da multiplicação, querr era pra multiplicar com o valor da porcentagem(decimal) com o preço.

int main (){
    float num1, num2;
    float decimal = 0;
    float aumento = 0;
    float npreco = 0;

    printf("Digite o valor:\n");
    scanf("%f", &num1);

    printf("Digite o valor da porcentagem:\n");
    scanf("%f", &num2);

    decimal = num2 / 100;

    aumento = num1 * decimal;

    npreco = aumento + num1;

    printf("O valor final: %2.f\n", npreco);

    return 0; 
    
}