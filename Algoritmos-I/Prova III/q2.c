#include <stdio.h>

int main (){
    float salario_bruto;
    float percentual_desconto = 0.0;
    float valor_desconto;
    float salario_liquido;

    printf("Digite o salario bruto: ");
    scanf("%f", &salario_bruto);

    if (salario_bruto <= 600.00) {
        percentual_desconto = 0.00;
    } else if (salario_bruto <= 1200.00) {
        percentual_desconto = 0.20;
    } else if (salario_bruto <= 2000.00) {
        percentual_desconto = 0.25;
    } else {
        percentual_desconto = 0.30;
    }
    
    valor_desconto = salario_bruto * percentual_desconto;
    salario_liquido = salario_bruto - valor_desconto;
    
    printf("---------------------------------------\n");
    printf("Salario Bruto: R$ %.2f\n", salario_bruto);
    printf("Desconto do INSS: R$ %.2f\n", valor_desconto);
    printf("Valor a Receber (Salario Liquido): R$ %.2f\n", salario_liquido);
    printf("---------------------------------------\n");
    
    return 0;
}