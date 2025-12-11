#include <stdio.h>

int main (){
    float horas;
    float minutos = 0, segundo = 0, milissigundos = 0;
    
    printf("Digite as horas: ");
    scanf("%f", &horas);

    minutos = horas * 60;
    segundo = horas * 3600;
    milissigundos = horas * 1000;

    printf("Horas convertidas:");
    printf("Minutos: %.2f\n", minutos);
    printf("Segundos: %.2f\n", segundo);
    printf("Milissigundos: %.2f\n", milissigundos);

    return 0;
}