#include <stdio.h>

int main (){

    // para fazer um for com o usuario digitando a entrada, o i tem q ser igual a variavel que leu o dado que o usuario inseriu, o i é obrigatorio para contar.
    int limite_inferior;
    int limite_superior;

    printf("Limite inferior: ");
    scanf("%d", &limite_inferior);

    printf("Limite superior: ");    
    scanf("%d", &limite_superior);

    printf("Os numeros imapares:\n");
    
    for (int i = limite_inferior; i <= limite_superior; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
        
    }

    return 0;

}