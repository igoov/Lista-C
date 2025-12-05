#include <stdio.h>
#include <string.h>

// && (and) 
// || (ou)
// quando for declarar um char, e na hora de ler variaveis nao precisa do &
// se for fazer uma confição com letras o minusculo e maiusculo tem diferença

int main (){

    char nome[50];  // Array para o nome (String)
    int idade;      // Inteiro simples
    char sexo;      // Caractere simples (Utiliza %c)

    for (int i = 0; i < 3; i++) {
        
        printf("Digite o nome: ");
        scanf("%s", nome);

        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        if (sexo == 'M' && idade >= 21) {
            printf("O nome da pessoa filtrada: %s\n", nome);
        }
        
    }
    
    return 0;

}
