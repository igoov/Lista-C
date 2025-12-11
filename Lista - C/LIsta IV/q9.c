#include <stdio.h> 

int main (){

    int n;
    int multi;

    printf("----Calculadora de Multiplicar----\n");
    printf("Digite o numero:\n");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        
        multi = n * i;

        printf("%d * %d = %d\n", n, i, multi);

    }
    
    return 0;

}