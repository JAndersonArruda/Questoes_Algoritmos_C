/*103. Escreva um programa que leia um número inteiro N e verifique se ele é um número
primo.*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int number;
    printf("Informe um numero inteiro possitivo: ");
    scanf("%d", &number);

    int i;
    int indice = 0;
    for(i = 1; i <= number; i ++)
    {
        if(number % i == 0)
        {
            indice += 1;
        }
    }
    if(indice == 2)
    {
        printf("O numero eh primo.");
    }
    else
    {
        printf("O numero nao eh primo.");
    }
    getch();
}
