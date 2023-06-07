/*156. Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a
leitura, leia um número inteiro N e imprima todos os elementos do vetor que são
maiores que N.*/

#include <stdio.h>

const int Tam = 10;

void main()
{
    int vet[Tam];
    int a;
    for (a = 0; a < Tam; a ++)
    {
        printf("Informe um numero inteiro: ");
        scanf("%d", &vet[a]);
    }

    int cont = 1;
    int num;

    do
    {
        printf("\nInforme um numero inteiro N: ");
        scanf("%d", &num);
        if (num > 0 && num <= 10)
        {
            printf("Os numeros maiores que %d sao:\n", num);
            for (a = 0; a < Tam; a ++)
            {
                if (vet[a] > num)
                {
                    printf("%d ", vet[a]);
                }
            }
            cont = 0;
        }
        else
        {
            printf("Informe um valor entre 1 e 10! \n");
        }
        
    } while (cont != 0);
    getch();
}