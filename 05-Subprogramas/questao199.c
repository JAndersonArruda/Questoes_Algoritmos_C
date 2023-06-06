/*199. Escreva um programa que leia três números inteiros e calcule a sua média aritmética.
O cálculo da média deve ser realizado através de um subprograma.*/

#include <stdio.h>

const int Tam = 3;

float calculoMedia(int vet[])
{
    int soma = 0;
    int a;
    for(a = 0; a < Tam; a ++)
    {
        soma += vet[a];
    }
    float media = (float)soma / Tam;
    return media;
}

void main()
{
    int vet[Tam];
    int a;
    for(a = 0; a < Tam; a ++)
    {
        printf("Informe um numero inteiro: ");
        scanf("%d", &vet[a]);
    }
    float media = calculoMedia(vet);
    printf("A media eh: %.2f", media);
    getch();
}