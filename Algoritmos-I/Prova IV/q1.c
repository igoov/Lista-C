#include <stdio.h>

int main (){

    int n = 5;

    printf("Multiplos:\n");

    for (int i = 0; i < 100; i++) {
         if (i % n == 0) {
            printf("%d\n", i);
         }
         
    }
    
    return 0;

}