/*110. Escreva um programa que leia um número natural N e calcule o seu fatorial.*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num;
    printf("Informe do numero inteiros: ");
    scanf("%d", &num);
    int fatorial = 1;
    int i;
    for(i = num; i > 0; i --)
    {
        fatorial *= i;
    }
    printf("O resultado eh %d ", fatorial);
    getch();
}
