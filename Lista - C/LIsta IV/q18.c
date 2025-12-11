#include <stdio.h>

int main() {
    int idade;
    int menorIdade = -1;
    int maiorIdade = -1;
    int somaIdades = 0;
    int contador = 0;
    float media;

    scanf("%d", &idade);

    while (idade != -1) {
        if (idade < 0) {
             scanf("%d", &idade);
             continue;
        }

        if (contador == 0) {
            menorIdade = idade;
            maiorIdade = idade;
        } else {
            if (idade < menorIdade) {
                menorIdade = idade;
            }
            if (idade > maiorIdade) {
                maiorIdade = idade;
            }
        }

        somaIdades += idade;
        contador++;

        scanf("%d", &idade);
    }

    if (contador > 0) {
        media = (float)somaIdades / contador;
        printf("%d\n", menorIdade);
        printf("%d\n", maiorIdade);
        printf("%.2f\n", media);
    } else {
        printf("Nenhuma idade valida inserida.\n");
    }

    return 0;
}