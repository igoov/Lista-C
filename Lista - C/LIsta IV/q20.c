#include <stdio.h>

int main (){

    int primeiro = 1, segundo = 1;
    int soma;

     printf("Primeiro numero: %d\n", primeiro);
     printf("Segundo numero: %d\n", segundo);

    

    for (int i = 0; i < 20; i++) {
        
        soma = primeiro + segundo;
        
        printf("Soma: %d\n", soma); 

        primeiro = segundo;
        segundo = soma;

    }

    return 0;
}