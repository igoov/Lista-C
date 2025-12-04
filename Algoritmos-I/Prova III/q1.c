#include <stdio.h>

int main (){

    float valor_compra;
    float lucro;
    float valor_venda;

    printf("Digite o valor de compra: ");
    scanf("%f", &valor_compra);
    
    if (valor_compra < 20.00 ) {
        lucro = valor_compra * 0.45;
        
    } else { 
        lucro = valor_compra * 0.30;
    }
    
    valor_venda = valor_compra + lucro; 

    printf("--- Resultado ---\n");
    printf("Valor de Compra: R$ %.2f\n", valor_compra);
    printf("Valor do Lucro: R$ %.2f\n", lucro);
    printf("Valor de Venda: R$ %.2f\n", valor_venda);
    
    return 0;
}