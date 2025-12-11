#include <stdio.h>

int main (){

    int n;
    int armazenar;
    int maior;
    int menor; 

    printf("Digite a quantidade de numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        
        printf("Digite os numeros (%d de %d): ", i, n);
        scanf("%d", &armazenar);

        if (i == 1){
            
            maior = armazenar;
            menor = armazenar;
            
        } else {
            if (armazenar > maior) {
                maior = armazenar;
            }
            
            if (armazenar < menor) {
                menor = armazenar; 

            }
            
        }
        
    }
    
    printf("-----------------------------\n");
    printf("O maior numero: %d\n", maior);
    printf("O menor numero: %d\n", menor);
    
    return 0;

}