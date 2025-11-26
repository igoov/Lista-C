#include <stdio.h>

int main (){
    
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int dife = 0;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &num1);

    printf("Digite o segundo numero:\n");
    scanf("%d", &num2);

    num3 = num1 * num1;
    num4 = num2 * num2;

    printf("A diferenca é: %d\n", dife = num3 - num4);
    return 0;
}