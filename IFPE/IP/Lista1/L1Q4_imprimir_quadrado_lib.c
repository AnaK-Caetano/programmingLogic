#include <stdio.h>
#include <math.h>

int main()
{
    float num, quadrado = 0; 
    printf("Digite um número real: \n");
    scanf("%f", &num);
    
    quadrado = pow(num, 2);
    
    printf("O quadrado do numero %.2f é %.2f", num, quadrado);

    return 0;
}