/*165. Escreva um programa que leia dois vetores A e B de 5 números inteiros e calcule um
terceiro vetor que contenha todos os elementos que estão presentes nos dois
vetores. O terceiro vetor não deverá armazenar valores repetidos.*/

#include <stdio.h>

const int Tamanho = 5;

void main()
{
    int vetA[Tamanho];
    int vetB[Tamanho];
    
    printf("Preenchendo o primeiro vetor...\n");
    int a;
    for(a = 0; a < Tamanho; a ++)
    {
        printf("Informe um numero inteiro: ");
        scanf("%d", &vetA[a]);
    }

    printf("Preenchendo o segundo vetor...\n");
    int b;
    for(b = 0; b < Tamanho; b ++)
    {
        printf("Informe um numero inteiro: ");
        scanf("%d", &vetB[b]);
    }
    
    // verificação de tamanho
    int adicional = 0;
    for(a = 0; a < Tamanho; a ++)
    {
        int indi = 0;
        int l;
        for(l = 0; l < Tamanho; l ++)
        {
            if(vetA[a] == vetA[l])
            {
                indi ++;
            }
            if(indi > 1)
            {
                adicional --;
            }
        }
        for(l = 0; l < Tamanho; l ++)
        {
            if(vetB[a] != vetA[l])
            {
                indi ++;
            }
            if(indi > Tamanho)
            {
                adicional ++;
            }
        }
    }

    int vetC[Tamanho+adicional];
    int k;

    // verificação de repetição de numero

    


    printf("\nImprimindo Vetor A: ");
    for (a = 0; a < Tamanho; a ++)
    {
        printf("%d ", vetA[a]);
    }

    printf("\nImprimindo Vetor B: ");
    for (b = 0; b < Tamanho; b ++)
    {
        printf("%d ", vetB[b]);
    }

    printf("\nImprimindo Vetor C: ");
    for (k = 0; k < Tamanho; k ++)
    {
        printf("%d ", vetC[k]);
    }
}