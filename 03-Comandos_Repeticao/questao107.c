/*107. Escreva um programa que leia dois números inteiros M e N e calcule a média
aritmética dos números primos do intervalo [M, N].*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int number1, number2, y, i;
    printf("Informe dois numeros inteiros: ");
    scanf("%d%d", &number1, &number2);

    int media = 0;
    int indice = 0;
    for(y = number1; y <= number2; y ++)
    {
        int cont = 0;
        for(i = 1; i <= y; i ++)
        {
            if(y % i == 0)
            {
                cont ++;
            }
        }
        if(cont == 2)
        {
            media += y;
            indice ++;
        }
    }
    float medFinal = (float)media / indice;
    printf("\n A media eh %.1f ", medFinal);
    getch();
}
