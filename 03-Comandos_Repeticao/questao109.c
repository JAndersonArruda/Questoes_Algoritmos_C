/*109. Escreva um programa que leia dois números inteiros M e N e um número inteiro X e
imprima todos os divisores exatos de X existentes no intervalo [M, N].*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num1, num2, num3;
    printf("Informe dois numero inteiros: ");
    scanf("%d%d",  &num1, &num2);
    printf("Informe do numero inteiros: ");
    scanf("%d",  &num3);
    int i, divisor;
    for(i = 1; i <= num3; i ++)
    {
        if(num3 % i == 0)
        {
            divisor = i;
            if(divisor >= num1 && divisor <= num2)
            {
                printf("%d ", divisor);
            }
        }
    }
    getch();
}
