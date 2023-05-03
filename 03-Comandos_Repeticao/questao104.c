/*104. Escreva um programa que leia um número inteiro N e verifique se ele é um número
perfeito. Um número é perfeito quando ele é igual à soma de todos os seus divisores
exatos exceto ele mesmo. Por exemplo, o número 6 (1+2+3) é um número perfeito.*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int number;
    printf("Informe um numero inteiro possitivo: ");
    scanf("%d", &number);

    int i;
    int divisor = 0;
    for(i = 1; i < number; i ++)
    {
        if(number % i == 0)
        {
            divisor = i;
            printf("%d ", divisor);
        }
    }
    getch();
}
