#include <stdio.h>

int main (){

    float nota1, nota2, nota3, nota4, soma = 0;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    soma = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("A media dos alunos: %.1f\n", soma);

    if (soma >= 7) {
        printf("Aprovado...\nBoas Ferias!!\n");
    } else {
        printf("Reprovado...\n");
    }
    
    return 0;
    
}