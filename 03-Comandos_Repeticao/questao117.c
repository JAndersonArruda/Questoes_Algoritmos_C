/*117. Escreva um programa que leia 10 n�meros inteiros e, para cada n�mero lido, calcule o
seu fatorial.*/

#include <stdio.h>
#include <stdlib.h>

const int Loop = 10;

void main()
{
    int i;
    for(i = 1; i <= Loop; i++)
    {
        int number;
        printf("Informe um numero inteiro: ");
        scanf("%d", &number);

        int fatorial = number;
        int k;
        for(k = number; k >= 2; k --)  // 5*4*3*2*1
        {
            fatorial *= (k-1);
        }
        printf("fatorial de %d eh %d \n", number, fatorial);
    }
    getch();
}
