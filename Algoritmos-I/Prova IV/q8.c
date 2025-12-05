#include <stdio.h>

int main() {
    const double FATOR_CONVERSAO = 2.54;
    double centimetros;
    int polegadas;

    printf("----------------------------------\n");
    printf("| Tabela de Conversao |\n");
    printf("| Polegadas (in) -> Centimetros (cm) |\n");
    printf("----------------------------------\n");
    printf("| Polegadas | Centimetros |\n");
    printf("|-----------|-------------|\n");

    for (polegadas = 1; polegadas <= 20; polegadas++) {
        centimetros = polegadas * FATOR_CONVERSAO;
        printf("| %9d | %11.2lf |\n", polegadas, centimetros);
    }
    
    printf("----------------------------------\n");

    return 0;
}