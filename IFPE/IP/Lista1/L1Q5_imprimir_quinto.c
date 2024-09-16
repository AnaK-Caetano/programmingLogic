#include <stdio.h>

int main()
{
    float num, quinto = 0; 
    printf("Digite um número real: \n");
    scanf("%f", &num);
    
    quinto = num / 5 ;
    
    printf("A quinta parte do numero %.2f é %.2f", num, quinto);

    return 0;
}