/*99. Escreva um programa que imprima todos os números inteiros entre 1 e 100 em ordem
descendente.*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i;
    for(i = 100; i >= 1; i --)
    {
        printf("%d ", i);
    }
    getch();
}
