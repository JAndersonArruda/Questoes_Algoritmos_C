/*157. Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a
leitura, leia um número inteiro N e imprima todas as posições em que o número N
aparece dentro do vetor.*/

#include <stdio.h>

const int Tamanho = 10;

void main()
{
    int vet[Tamanho];
    int a;
    for (a = 0; a < Tamanho; a ++)
    {
        printf("Informe um numero inteiro: ");
        scanf("%d", &vet[a]);
    }
    int num;
    printf("Informe um numero N: ");
    scanf("%d", &num);
    printf("Essas são as posições em que o numero N está armazenado: ");
    int cont = 0;
    for (a = 0; a < Tamanho; a ++)
    {
        if (vet[a] == num)
        {
            printf("%d ", a+1);
            cont ++;
        }
    }
    if (cont == 0)
    {
        printf("\n\nO numero N não está armazenado no vetor!\n");
    }
    getch();
}