/*101. Escreva um programa que leia um n�mero inteiro positivo N e imprima os N
primeiros n�meros �mpares positivos.*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int number;
    printf("Informe um numero inteiro possitivo: ");
    scanf("%d", &number);

    int i;
    for(i = 1; i <= number*2; i += 2)
    {
        printf("%d ", i);
    }
    getch();
}
