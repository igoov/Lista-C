#include <stdio.h>

int main (){

    int multi = 0;

    printf("----O quadrado dos numeros----\n");

    for (int i = 10; i < 31; i++) {
        
        multi = i * i;
        printf("%d\n", multi);

    }
    
    return 0;

}