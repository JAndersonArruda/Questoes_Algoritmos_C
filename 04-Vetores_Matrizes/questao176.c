/*176. Escreva um programa que leia uma matriz quadrada de ordem 4 de números inteiros
e imprima a matriz lida*/

#include <stdio.h>

const int Ordem = 4;

void main()
{
    int matriz[Ordem][Ordem];
    int i;
    for(i = 0; i < Ordem; i ++)
    {
        int j;
        for(j = 0; j < Ordem; j ++)
        {
            printf("informe um numero inteiro: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\nImprimindo matriz: \n");
    for(i = 0; i < Ordem; i ++)
    {
        int j;
        for(j = 0; j < Ordem; j ++)
        {
            printf("%.02d ", matriz[i][j]);
        }
        printf("\n");
    }
    getch();
}