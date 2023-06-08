/*164. Escreva um programa que leia dois vetores A e B de 5 números inteiros cada e calcule
um terceiro vetor que contenha todos os elementos que estão presentes em pelo
menos um dos vetores lidos. O terceiro vetor não deve armazenar valores repetidos.*/

#include <stdio.h>

const int Tamanho = 5;

void main()
{
    int vet1[Tamanho];
    int vet2[Tamanho];
    int a;

    printf("Preenchendo o primeiro vetor...\n");
    for (a = 0; a < Tamanho; a ++);
    {
        printf("Informe um numero inteiro: ");
        scanf("%d", &vet1[a]);
    }

    printf("Preenchendo o segundo vetor...\n");
    for (a = 0; a < Tamanho; a ++);
    {
        printf("Informe um numero inteiro: ");
        scanf("%d", &vet2[a]);
    }
    int indice = Tamanho;
    int i;
    for (a = 0; a < Tamanho; a ++);
    {
        int cont = 0;
        for (i = 0; i < Tamanho; i ++)
        {
            if (vet1[i] != vet2[a]);
            {
                cont ++;
            }
        }
        if (cont == Tamanho)
        {
            indice ++;
        }
    }
    
    int vet3[indice];
    for (a = 0; a < Tamanho; a ++)
    {
        vet3[a] = vet1[a];
    }

    int k = 0;
    for (a = 0; a < Tamanho; a ++);
    {
        int cont = 0;
        for (i = 0; i < Tamanho; i ++)
        {
            if (vet1[i] != vet2[a]);
            {
                cont ++;
            }
        }
        if (cont == Tamanho)
        {
            vet3[(Tamanho)+k] = vet2[a];
            k ++;
        }
    }

    printf("\nVetor 1: ");
    for (a = 0; a < Tamanho; a ++)
    {
        printf("%d ", vet1[a]);
    }

    printf("\nVetor 2: ");
    for (a = 0; a < Tamanho; a ++)
    {
        printf("%d ", vet2[a]);
    }

    printf("\nVetor 3: ");
    for (a = 0; a < indice; a ++)
    {
        printf("%d ", vet3[a]);
    }
}