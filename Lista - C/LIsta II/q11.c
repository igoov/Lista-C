#include <stdio.h>

//entendi nada

int main (){

    int numero;
    int n1,n2,n3;

    printf("Digite tres algoritmos: ");
    scanf("%d", &numero);

    n1 = numero % 10;
    n2 = (numero / 10) % 10;
    n3 = numero / 100;

    printf("%d\n", n3);
    printf("%d\n", n2);
    printf("%d\n", n1);
    
    return 0;
}