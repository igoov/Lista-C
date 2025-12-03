#include <stdio.h>

//erro besta de parantese na hora da soma.
int main (){
    float n1,n2,n3;
    float p1,p2,p3;
    float media;

    printf("Digite a primeira nota:\n");
    scanf("%f", &n1);

    printf("Digite o peso da primeira nota:\n");
    scanf("%f", &p1);

    printf("Digite a segunda nota:\n");
    scanf("%f", &n2);

    printf("Digite o peso da segunda nota:\n");
    scanf("%f", &p2);

    printf("Digite a terceira nota:\n");
    scanf("%f", &n3);
    
    printf("Digite o peso da terceira nota:\n");
    scanf("%f", &p3);

    media = (n1 * p1+ n2 * p2 + n3 * p3) / (p1 + p2 +p3); 

    printf ("A media ponderada e: %2.f\n", media);

    return 0;

}