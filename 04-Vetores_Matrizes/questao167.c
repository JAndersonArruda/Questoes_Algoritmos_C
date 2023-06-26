/*167. Escreva um programa que leia um vetor de dez números inteiros e ordene o vetor
lido em ordem crescente.*/

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
}

 0 1 2 3 4 5  6 7  8 9
[9' 4 5 7 8 5 33 5- 66 8]

[4 5 5 5 7 8 8 9' 33 66]

0 = 
começa em 1, a cada menor cont 1
aux = vet[Tamanho-1-cont];
vet2[Tamanho-1-cont] = vet[a];
    detro um for, começa em 0, comparo o aux com todo o vetor <, falta os avlores iguais

