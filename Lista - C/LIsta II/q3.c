#include <stdio.h>

int main (){

//sempre lembrar do \n
    int n;

    printf("Digite o numero: ");
    scanf("%d", &n);

    printf("O antecessor: %d\n", n - 1);
    printf("O sucessor: %d\n", n + 1);

    return 0;
}