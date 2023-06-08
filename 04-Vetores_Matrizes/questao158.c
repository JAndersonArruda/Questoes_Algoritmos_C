/*158. Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a
leitura, imprima todos os elementos do vetor que são maiores do que a média
aritmética de todos os elementos do vetor.*/

#include <stdio.h>

const int Tamanho = 10;

void main()
{
    int vet[Tamanho];
    int a;
    int soma = 0;
    for (a = 0; a < Tamanho; a ++)
    {
        printf("Informe um numero inteiro: ");
        scanf("%d", &vet[a]);
        soma += vet[a];
    }
    printf("\nMedia aritmetica do vetor: %d \n", soma/Tamanho);
    printf("\nValores do vetor maiores que a media aritmetica: ");
    int cont = 0;
    for (a = 0; a < Tamanho; a ++)
    {
        if (vet[a] > soma/Tamanho)
        {
            printf("%d ", vet[a]);
            cont ++;
        }
    }
    if (cont == 0)
    {
        printf("\n\nO vetor não possui valores maiores que a media.");
    }
    getch();
}