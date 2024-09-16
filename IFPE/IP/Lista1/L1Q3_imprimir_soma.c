#include <stdio.h>

int main()
{
    int num_1, num_2, num_3; 
    int soma = 0;
    
    printf("Digite o primeiro número inteiro: \n");
    scanf("%d", &num_1);
    printf("Digite o segundo número inteiro: \n");
    scanf("%d", &num_2);
    printf("Digite o terceiro número inteiro: \n");
    scanf("%d", &num_3);
    
    soma = num_1 + num_2 + num_3;
    
    printf("A soma dos números %d, %d e %d é %d", num_1, num_2, num_3, soma);

    return 0;
}