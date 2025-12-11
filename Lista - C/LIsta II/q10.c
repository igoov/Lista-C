#include <stdio.h>

//erro somente no sinal 

int main (){

    float deposito;
    float taxa = 0;
    float juros;
    float rendimento;
    float valortotal;
    
    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);

    printf("Digite o valor do juros: ");
    scanf("%f", &juros);

    taxa = juros / 100;

    rendimento = deposito * taxa;

    printf("O valor do rendimento e: %.2f\n", rendimento);
    
    valortotal = deposito + rendimento;

    printf("O valor total e: %.2f\n", valortotal);

    return 0;
}