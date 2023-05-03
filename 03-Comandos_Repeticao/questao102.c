/*102. Escreva um programa que leia um número inteiro N e imprima todos os seus
divisores exatos.*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int number;
    printf("Informe um numero inteiro possitivo: ");
    scanf("%d", &number);

    int i;
    int divisor = 0;
    for(i = 1; i <= number; i ++)
    {
        if(number % i == 0)
        {
            divisor = i;
            printf("%d ", divisor);
        }
    }
    getch();
}
