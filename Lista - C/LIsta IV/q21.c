#include <stdio.h>

int main (){

    int primeiro = 0, segundo = 0;
    int soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiro);

    printf("Digite o segundo numero: ");
    scanf("%d", &segundo);
    

    for (int i = 0; i < 20; i++) {
        
        soma = primeiro + segundo;
        
        printf("Soma: %d\n", soma); 

        primeiro = segundo;
        segundo = soma;

    }

    return 0;
}