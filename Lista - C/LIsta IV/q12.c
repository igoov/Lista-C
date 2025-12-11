#include <stdio.h>

int main (){

//so errei o incremento, pq pode ser tanto soma += numero; quanto soma = soma + numero;

    int n;
    int soma = 0;
    int numero;

    printf("Digite a quantidade de numeros: "); 
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        
        printf("Digite os numeros: ");
        scanf("%d", &numero);
        
        soma = soma + numero;
    }
    
    printf("\nA somatoria dos numeros: %d\n", soma);
    
    return 0;
    
}