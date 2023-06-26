/*164. Escreva um programa que leia dois vetores A e B de 5 números inteiros cada e calcule
um terceiro vetor que contenha todos os elementos que estão presentes em pelo
menos um dos vetores lidos. O terceiro vetor não deve armazenar valores repetidos.*/

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

    int vetC[Tamanho];
    int k;
    for(k = 0; k < Tamanho; k ++)
    {
        vetC[k] = vetA[k];
    }

    // verificação de repetição de numero

    for(k = 0; k < Tamanho; k ++)
    {
        int indi = 0;
        int l;
        for(l = 0; l < Tamanho; l ++)
        {
            if(vetC[k] == vetC[l])
            {
                indi ++;
            }
            if(indi > 1)
            {
                int g;
                for(g = 0; g < Tamanho; g ++)
                {
                    if(vetC[k] != vetB[g])
                    {
                        int contSecund = 0;
                        int h;
                        for(h = 0; h < Tamanho; h ++)
                        {
                            if(vetB[g] == vetC[h])
                            {
                                contSecund ++;
                            }
                        }
                        if (contSecund == 0)
                        {
                            vetC[k] = vetB[g];
                        }
                    }
                }
            }
        }
    }


    // impressão dos Vetores 
    
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
    getch();
}