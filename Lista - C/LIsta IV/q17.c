#include <stdio.h>

int main() {
    char sexo;
    int masculino = 0;
    int feminino = 0;

    scanf(" %c", &sexo);

    while (sexo != '@') {
        if (sexo == 'm' || sexo == 'M') {
            masculino++;
        } else if (sexo == 'f' || sexo == 'F') {
            feminino++;
        }

        scanf(" %c", &sexo);
    }

    printf("Masculino: %d\n", masculino);
    printf("Feminino: %d\n", feminino);

    return 0;
}