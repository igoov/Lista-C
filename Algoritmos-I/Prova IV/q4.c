#include <stdio.h>

int main (){

    int soma;

    printf("----Somatoria----\n");

    for (int i = 20;i < 61;i++) {
    
        soma = i + i;
        printf("%d\n", soma); 
    
    }
    
    return 0;
    
}