/*179. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
imprima todos os elementos que estão acima e abaixo da diagonal principal.*/

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
    printf("\nValores acima da diagonal principal:\n");
    int tab = 0;
    int t;
    for(i = 0; i < ORDEM-1; i ++)
    {
        for(t = 0; t < tab; t ++)
        {
            printf("     ");
        }
        tab ++;
        for(j = i+1; j < ORDEM; j ++)
        {
            printf("%.1f  ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nValores abaixo da diagonal principal:\n");
    for(i = 1; i < ORDEM; i ++)
    {
        for(j = 0; j < i; j ++)
        {
            printf("%.1f  ", matriz[i][j]);
        }
        printf("\n");
    }
    getch();
}