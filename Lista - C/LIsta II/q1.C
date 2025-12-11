#include <stdio.h>

int main (){
    int n;
    int soma = 0; 

    printf("Digite um numero:\n");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("O numero tem que ser positivo!");
        return 1; // return 1 significa que o progama terminou com um erro
    }

    for (int i = 1; i < n; i++) {
        if (n % i == 0)
        {
            soma += i;
        }
        
    }
    
    if (soma == n)
    {
        printf("O resutaldo e um numero perfeito\n");
    } else {
        printf("o resutaldo nao e um numero perfeito\n");
    }
    
    return 0;

}