#include <stdio.h>

int main (){

    int opcao;
    
    int n1 = 1, n2 = 1, soma, resultado;

    int numero1, numero2;

    printf("\n---------------------------------\n");
    printf("Digite 1 ou 2 para as seguintes opcoes:\n");
    printf("1 - Para a sequencia de Fibonacci\n");
    printf("2 - Para a sequencia de Ricci\n");
    printf("=> ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        
        printf("Primeiro numero: %d\n", n1);
        printf("Segundo numero: %d\n", n2);
        
        for (int i = 0; i < 18; i++) {
            
            soma = n1 + n2;

            printf("Soma: %d\n", soma); 

            n1 = n2;
            n2 = soma;
        }
        
        break;
    
    case 2: 

        printf("Digite o primeiro numero: ");
        scanf("%d", &numero1);

        printf("Digite o segundo numero: ");
        scanf("%d", &numero2);
        

        for (int i = 0; i < 18; i++) {
            
            resultado = numero1 + numero2;
            
            printf("Soma: %d\n", resultado); 

            numero1 = numero2;
            numero2 = resultado;

        }

        break;

    default:
        printf("Erro. Digite 1 ou 2.");
        
        break;
    }

    return 0;

}