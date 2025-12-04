#include <stdio.h>

int main (){

    int idadeh1, idadeh2;
    int idadem1, idadem2;
    
    int somaHmaior = 0;
    int somaHmenor = 0;

    int somaMmenor = 0;
    int somaMmaior = 0;

    int resultado1;
    int resultado2;

    printf("Digite a idade do homem: ");
    scanf("%d", &idadeh1);
    printf("Digite a idade do outro homem: ");
    scanf("%d", &idadeh2);
    
    printf("\n");

    printf("Digite a idade da mulher: ");
    scanf("%d", &idadem1);
    printf("Digite a idade da outra: ");
    scanf("%d", &idadem2);

    printf("\n");

    if (idadeh1 > idadeh2){
        somaHmaior = idadeh1;
        somaHmenor = idadeh2;
    } else {
        somaHmaior = idadeh2;
        somaHmenor = idadeh1;
    }

    if (idadem1 > idadem2) {
        somaMmaior = idadem1;
        somaMmenor = idadem2;
    } else {
        somaMmaior = idadem2;
        somaMmenor = idadem2;
    }

    resultado1 = somaHmaior + somaMmenor;
    printf("A soma das idades (homem mais velho + mulher mais nova): %d\n", resultado1);

    resultado2 = somaHmenor * somaMmaior;
    printf("A soma das idades (homem mais novo * mulher mais velha): %d\n", resultado2);

    return 0;
}