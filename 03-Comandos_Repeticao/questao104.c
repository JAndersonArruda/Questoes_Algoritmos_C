/*104. Escreva um programa que leia um n�mero inteiro N e verifique se ele � um n�mero
perfeito. Um n�mero � perfeito quando ele � igual � soma de todos os seus divisores
exatos exceto ele mesmo. Por exemplo, o n�mero 6 (1+2+3) � um n�mero perfeito.*/

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
