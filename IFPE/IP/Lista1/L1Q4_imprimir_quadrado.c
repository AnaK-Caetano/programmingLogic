#include <stdio.h>

int main()
{
    float num, quadrado = 0; 
    printf("Digite um número real: \n");
    scanf("%f", &num);
    
    quadrado = num * num;
    
    printf("O quadrado do numero %.2f é %.2f", num, quadrado);

    return 0;
}