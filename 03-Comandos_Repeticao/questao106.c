/*106. Escreva um programa que leia dois n�meros inteiros M e N e calcule a m�dia
aritm�tica dos n�meros do intervalo [M, N].*/

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
