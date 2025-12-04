#include <stdio.h>

int main (){
    float valor;
    float desconto = 0, valordesconto = 0;
    float salario = 0;

    printf("Digite o salario bruto: ");
    scanf("%f", &valor);

    if (valor <= 600) {

        desconto = 0.0;
        printf("Percentual de desconto: Isento!\n");

    } else if (valor <= 1200) {
        
        desconto = 0.20;
    
    } else if (valor <= 2000) {
    
        desconto = 0.25;
    
    } else {
    
        desconto = 0.30;
    
    }
  
    valordesconto = valor * desconto; 
    salario = valor - valordesconto;

    printf("-------------------------\n");
    printf("Valor bruto: %.2f\n", valor);

    if (desconto == 0.0) {
        printf("Pecentual do desconto: Isento\n");
    } else {
        printf("Percentual do desconto: %.0f%%\n", desconto * 100);
    }
    
    printf("VALOR do Desconto do INSS: R$ %.2f\n", valordesconto);
    printf("VALOR A Receber (Liquido): R$ %.2f\n", salario);
    printf("-------------------------\n");

    return 0;

}