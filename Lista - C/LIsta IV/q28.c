#include <stdio.h>



int main (){

    int numero;
    int par = 0, impar = 0;

    printf("-----------------------\n");
    printf("Digite um numero:\n");

    for (int i = 1; i < 20; i++) {
      
        printf("%d de 20: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            par += 1;

        } else {

            impar += 1;
            
        }
        

    }
    
    printf("\n-----------------------\n");
    printf("A quantidade de numeros pares: %d\n",par);
    
    printf("A quantidade de numeros pares: %d\n",impar);
    
    return 0;
}