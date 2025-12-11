#include <stdio.h>

int main (){

    //so esqueci do \n

    int num, t2 = 0, t3 = 0;

    printf("Digite o numero: ");
    scanf("%d", &num);

    t2 = num / 2;
    t3 = t2 / 3;

    printf("A terça metade e: %d\n", t3);
    
    return 0; 
}