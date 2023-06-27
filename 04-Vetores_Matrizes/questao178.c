/*178. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
imprima todos os elementos da sua diagonal principal.*/

#include <stdio.h>

const int ORDEM = 5;

void main()
{
    float matriz[ORDEM][ORDEM];
    int i, j;
    for(i = 0; i < ORDEM; i ++)
    {
        for(j = 0; j < ORDEM; j ++)
        {
            printf("Informe um numero real: ");
            scanf("%f", &matriz[i][j]);
        }
    }
    printf("\nA matriz eh:\n");
    for(i = 0; i < ORDEM; i ++)
    {
        for(j = 0; j < ORDEM; j ++)
        {
            printf("%.1f  ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nValores da diagonal principal: ");
    for(i = 0; i < ORDEM; i ++)
    {
        printf("%.1f  ", matriz[i][i]);
    }
    getch();
}

        