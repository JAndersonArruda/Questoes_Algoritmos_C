/*177. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
calcule a sua matriz transposta.*/

#include <stdio.h>

const int Ordem = 5;

void main()
{
    float matriz[Ordem][Ordem];
    int i;
    for(i = 0; i < Ordem; i ++)
    {
        int j;
        for(j = 0; j < Ordem; j ++)
        {
            printf("informe um numero real: ");
            scanf("%f", &matriz[i][j]);
        }
    }
    printf("\nImprimindo matriz: \n");
    for(i = 0; i < Ordem; i ++)
    {
        int j;
        for(j = 0; j < Ordem; j ++)
        {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
    // imprimindo a transposta
    printf("\n");
    printf("\nImprimindo matriz transposta: \n");
    for(i = 0; i < Ordem; i ++)
    {
        int j;
        for(j = 0; j < Ordem; j ++)
        {
            printf("%.2f ", matriz[j][i]);
        }
        printf("\n");
    }
    getch();
}