#include <stdio.h>

int main (){

    int opcao_viagem;
    int opcao_destino;
    float norte = 0, nordeste = 0, centro = 0, sul = 0;
    float norte2 = 0, nordeste2 = 0, centro2 = 0, sul2 = 0;

    norte = 500.00;
    nordeste = 350.00; 
    centro = 350.00;
    sul = 300.00;

    norte2 = 900.00;
    nordeste2 = 650.00; 
    centro2 = 600.00;
    sul2 = 550.00;
    
    printf("--------------------------\n");
    printf("Escolha o seu destino:\n");
    printf("1 - Apenas Ida\n");
    printf("2 - Apenas Ida e Volta\n");
    printf("--------------------------\n");

    printf("=>");
    scanf("%d", &opcao_viagem);
    
    switch (opcao_viagem) {
    case 1:
    
        printf("Qual o seu destino?\n");
        printf("1 - Regiao Norte\n");
        printf("2 - Regiao Nordeste\n");
        printf("3 - Regiao Centro-Oeste\n");
        printf("4 - Regiao Sul\n");
        printf("=>");
        scanf("%d", &opcao_destino);

        switch (opcao_destino) {
        case 1:
            printf("O valor e R$: %.2f\n", norte);
            break;
        
        case 2:
            printf("O valor e R$: %.2f\n", nordeste);
            break;
        
        case 3: 
            printf("O valor e R$ %.2f", centro);
            break;
        
        case 4: 
            printf("O valor e R$ %.2f", sul);
            break;
        
        default:
            break;
        }
        
        break; 

    case 2:
    
        printf("Qual o seu destino?\n");
        printf("1 - Regiao Norte\n");
        printf("2 - Regiao Nordeste\n");
        printf("3 - Regiao Centro-Oeste\n");
        printf("4 - Regiao Sul\n");
        printf("=>");
        scanf("%d", &opcao_destino);

        switch (opcao_destino) {
        case 1:
            printf("O valor e R$: %.2f\n", norte2);
            break;
        
        case 2:
            printf("O valor e R$: %.2f\n", nordeste2);
            break;
        
        case 3: 
            printf("O valor e R$ %.2f", centro2);
            break;
        
        case 4: 
            printf("O valor e R$ %.2f", sul2);
            break;
            
        default:
            break;
        }
        
        break; 
        
    default:
        break;
    }
    
    return 0;

}