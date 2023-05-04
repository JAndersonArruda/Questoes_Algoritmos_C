/*113. Escreva um programa que leia dois números inteiros M e N e imprima todos os
números primos existentes no intervalo [M, N].*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int numberM, numberN;
    printf("Informe um numero M e N: ");
    scanf("%d%d", &numberM, &numberN);
    int i, k;
    for(i = numberM; i <= numberN; i ++)
    {
        int cont = 0;
        for(k = 1; k <= i; k++)
        {
            if(i % k == 0)
            {
                cont ++;
            }
        }
        if(cont == 2)
        {
            printf("%d ", i);
        }
    }
    getch();
}
