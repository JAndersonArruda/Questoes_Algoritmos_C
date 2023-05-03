/*106. Escreva um programa que leia dois números inteiros M e N e calcule a média
aritmética dos números do intervalo [M, N].*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int number1, number2;
    printf("Informe dois numeros inteiros: ");
    scanf("%d%d", &number1, &number2);

    int media = 0;
    int indice = 0;
    for( ;number1 <= number2; number1 ++)
    {
        media += number1;
        indice += 1;
    }
    media = media / indice;
    printf("%d ", media);
    getch();
}
