#include <stdio.h>

//tive que fazer um vetor pq é errado fazer nome com char, tem q ser vetor, e pra ler é so chamar a variavel
int main (){

    char nome[50];
    char sobrenome[50];

    printf("Digite o primeiro nome: ");
    scanf("%s", nome);

    printf("Digite o sobrenome: ");
    scanf("%s", sobrenome);

    printf("O nome completo: %s %s", nome, sobrenome);

    return 0;

}