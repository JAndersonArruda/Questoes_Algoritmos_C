/*167. Escreva um programa que leia um vetor de dez números inteiros e ordene o vetor
lido em ordem crescente.*/

#include <stdio.h>

const int Tamanho = 10;

void main()
{
    int vet[Tamanho];
    int a;
    for(a = 0; a < Tamanho; a ++)
    {
        printf("Informe um numero inteiro: ");
        scanf("%d", &vet[a]);
    }

    // imprimindo o vetror em ordem normal
    printf("\nImprimindo vetor antes da ordenação crescente: ");
    for(a = 0; a < Tamanho; a ++)
    {
        printf("%d ", vet[a]);
    }

    // ordenação crescente
    for(a = 0; a < Tamanho-1; a ++)
    {
        // possicão menor
        int posMenor = a;
        int k;
        for(k = posMenor+1; k < Tamanho; k ++)
        {
            if(vet[k] < vet[posMenor])
            {
                posMenor = k;
            }
        }
        // permutando valores
        if(a != posMenor)
        {
            int aux = vet[a];
            vet[a] = vet[posMenor];
            vet[posMenor] = aux;
        }
    }

    // imprimindo o vetror em ordem crescente
    printf("\nImprimindo vetor em ordem crescente: ");
    for(a = 0; a < Tamanho; a ++)
    {
        printf("%d ", vet[a]);
    }
    getch();
}