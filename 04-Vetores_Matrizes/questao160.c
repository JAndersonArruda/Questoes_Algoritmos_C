/*160. Escreva um programa que leia um vetor de 10 números inteiros e inverta todos os
elementos do vetor. O programa deve ser resolvido com a utilização de apenas um
vetor.*/

#include <stdio.h>

const int Tamanho = 10;

void main()
{
    int vet[Tamanho];
    int a;
    for (a = 0; a < Tamanho; a ++)
    {
        printf("Infomre um numero inteiro: ");
        scanf("%d", &vet[a]);
    }
    printf("Vetor antes da inversao de valores: \n");
    for (a = 0; a < Tamanho; a ++)
    {
        printf("%d ", vet[a]);
    }
    for (a = 0; a < Tamanho/2; a ++)
    {
        int aux = vet[a];
        vet[a] = vet[(Tamanho-1)-a];
        vet[(Tamanho-1)-a] = aux;
    }
    printf("\nVetor apos a troca de valores: \n");
    for (a = 0; a < Tamanho; a ++)
    {
        printf("%d ", vet[a]);
    }
    getch();
}