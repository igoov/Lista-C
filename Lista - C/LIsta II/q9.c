#include <stdio.h>

//quando for fazer aumento de %,  multiplica pelo saldo e o valor da 5, exemplo: 10% é 0.10...

int main (){

    float saldo, novosaldo = 0;

    printf("Digite o valor do seu saldo: ");
    scanf("%f", &saldo);

    novosaldo = saldo + (saldo * 0.10);

    printf("O novo saldo com o aumento: %.2f\n", novosaldo);

    return 0;
}