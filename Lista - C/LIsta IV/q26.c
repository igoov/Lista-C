#include <stdio.h>

int main (){

    char nome[50];
    float n1,n2,n3;
    float media = 0;

    for (int i = 0; i < 20; i++) {
            
        printf("\n--- Registro do Aluno %d ---\n", i);
        
        printf("Nome: ");
        scanf("%s", nome); 

        printf("Notas (1, 2 e 3): ");
        scanf("%f %f %f", &n1, &n2, &n3);

        media = (n1 + n2 + n3) / 3.0;

        printf("\nAluno: %s", nome);
        printf("\nMedia: %.2f", media);

        if (media >= 7.0) {
                printf("\nSituacao: APROVADO\n");
            } 
            else if (media >= 5.0) {
                printf("\nSituacao: EXAME FINAL\n");
            } 
            else {
                printf("\nSituacao: REPROVADO\n");
            }
            printf("--------------------------\n");
        }

    return 0;
    
}