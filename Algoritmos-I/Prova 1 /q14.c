#include <stdio.h>

int main (){
    int a,b,q;
    
    printf("Digite o primeiro numero:\n");
    scanf("%d", &a);

    printf("Digite o segundo numero:\n");
    scanf("%d", &b);

    q = a / b;

    printf("A divisao inteira e: %d\n", q);

    return 0;

}