/*105. Escreva um programa que leia dois n�meros inteiros M e N e calcule a soma de todos
os n�meros do intervalo [M, N].*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int number1, number2;
    printf("Informe dois numeros inteiros: ");
    scanf("%d%d", &number1, &number2);

    int soma = 0;
    for( ;number1 <= number2; number1 ++)
    {
        soma += number1;
    }
    printf("%d ", soma);
    getch();
}
