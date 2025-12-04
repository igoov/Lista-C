#include <stdio.h>

int main (){

    int opcao_viagem;
    int opcao_destino;
    
    float norte = 500.00;
    float nordeste = 350.00; 
    float centro = 350.00;
    float sul = 300.00;

    float norte2 = 900.00;
    float nordeste2 = 650.00; 
    float centro2 = 600.00;
    float sul2 = 550.00;
    
    printf("--------------------------\n");
    printf("Escolha o seu destino:\n");
    printf("1 - Apenas Ida\n");
    printf("2 - Ida e Volta\n");
    printf("--------------------------\n");

    printf("=> ");
    scanf("%d", &opcao_viagem);
    
    switch (opcao_viagem) {
    case 1:
    
        printf("\n--- Voce escolheu APENAS IDA ---\n");
        printf("Qual o seu destino?\n");
        printf("1 - Regiao Norte\n");
        printf("2 - Regiao Nordeste\n");
        printf("3 - Regiao Centro-Oeste\n");
        printf("4 - Regiao Sul\n");
        printf("=> ");
        scanf("%d", &opcao_destino);

        switch (opcao_destino) {
        case 1:
            printf("O valor e R$: %.2f\n", norte);
            break;
        case 2:
            printf("O valor e R$: %.2f\n", nordeste);
            break;
        case 3: 
            printf("O valor e R$: %.2f\n", centro);
            break;
        case 4: 
            printf("O valor e R$: %.2f\n", sul);
            break;
        default:
            printf("Opcao de destino invalida!\n");
            break;
        }
        
        break; 

    case 2:
    
        printf("\n--- Voce escolheu IDA E VOLTA ---\n");
        printf("Qual o seu destino?\n");
        printf("1 - Regiao Norte\n");
        printf("2 - Regiao Nordeste\n");
        printf("3 - Regiao Centro-Oeste\n");
        printf("4 - Regiao Sul\n");
        printf("=> ");
        scanf("%d", &opcao_destino);

        switch (opcao_destino) {
        case 1:
            printf("O valor e R$: %.2f\n", norte2);
            break;
        case 2:
            printf("O valor e R$: %.2f\n", nordeste2);
            break;
        case 3: 
            printf("O valor e R$: %.2f\n", centro2);
            break;
        case 4: 
            printf("O valor e R$: %.2f\n", sul2);
            break;
        default:
            printf("Opcao de destino invalida!\n");
            break;
        }
        
        break; 
        
    default:
        printf("\nOpcao de viagem invalida. Escolha 1 ou 2.\n");
        break;
    }
    
    return 0;
}