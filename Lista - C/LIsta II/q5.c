#include <stdio.h>

int main (){ 

    //para printar 2 casas decimamis usa .2f

    float n1, n2, soma; 

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    soma = (n1 + n2) / 2;

    printf("O resultado aritmetico: %.2f\n", soma);

    return 0;

}