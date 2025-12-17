#include <stdio.h>

int main () {

    int idade;
    int soma = 0;
    int maior, menor; 
    float media;

    for (int i = 0; i < 20; i++) { 

        printf("Digite uma idade: ");
        scanf("%d", &idade);
        
        soma += idade;
        if ( i == 1) {

            maior = idade;
            menor = idade; 

        } else {
            if (idade > maior) {
                maior = idade;
            } 

            if (idade < menor) {
                menor = idade;
            }
            
            
        }
        
        
    }

    media = soma / 20.0; 

    printf("\n--- RESULTADOS ---");
    printf("\nMédia das idades: %.2f", media);
    printf("\nMaior idade: %d", maior);
    printf("\nMenor idade: %d\n", menor);

    return 0;

}