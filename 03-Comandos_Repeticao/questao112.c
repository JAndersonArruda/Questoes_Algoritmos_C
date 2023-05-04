/*112. Escreva um programa que leia um número inteiro N e imprima o enésimo termo da
série de Fibonacci. (1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...).*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int number;
    printf("Informe um numero inteiro: ");
    scanf("%d", &number);
    int fibon = 1;
    int soma = 1;
    int i;
    for(i = 1; i <= number - 2; i++)
    {
        fibon += soma;
        soma = fibon - soma;
    }
    printf("Resultado: %d", fibon);
    getch();
}
