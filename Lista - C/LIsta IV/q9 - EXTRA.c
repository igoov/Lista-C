#include <stdio.h> 

int main (){

    int escolha;
    
    double div1, div2, divisao; 
    
    int numA, numB; 
    int soma, sub, multi; 
    
    do {
        printf("----Calculadora----\n");
        printf("Escolha as opcoes:\n");
        printf("1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("0 - Sair\n");
        printf("-------------------\n");

        printf("Escolha uma das opcoes:\n");
        printf("=>");
        scanf("%d", &escolha);
        
        if (escolha != 0) {
            
            if (escolha == 4) {
                 printf("Digite o primeiro numero: ");
                 scanf("%lf", &div1);
                 printf("Digite outro numero: ");
                 scanf("%lf", &div2);
            } else if (escolha >= 1 && escolha <= 3) {
                 printf("Digite o primeiro numero: ");
                 scanf("%d", &numA);
                 printf("Digite outro numero: ");
                 scanf("%d", &numB);
            }
            
            switch (escolha)
            {
            case 1:
                soma = numA + numB;
                printf("O seu resultado: %d + %d = %d\n", numA, numB, soma);
                break;
            
            case 2:
                sub = numA - numB;
                printf("O seu resultado: %d - %d = %d\n", numA, numB, sub);
                break;
            
            case 3: 
                multi = numA * numB;
                printf("O seu resultado: %d * %d = %d\n", numA, numB, multi);
                break;
            
            case 4: 
                if (div2 != 0.0){
                    divisao = div1 / div2;
                    printf("O seu resultado: %.2lf / %.2lf = %.2lf\n", div1, div2, divisao);
                } else{
                    printf("Erro: Divisao por zero\n");
                }
                break;
                
            default: 
                printf("Opcao invalida. Por favor, escolha de 0 a 4\n");
                break;
            }
            printf("\n");   
        }
        
    } while (escolha != 0);

    printf("Calculadora encerrada.\n");

    return 0;

}