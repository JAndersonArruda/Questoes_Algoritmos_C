/*159. Escreva um programa que leia um vetor de 10 números inteiros e dois números
inteiros M e N entre 1 e 10 e inverta os elementos que ocupam as posições M e N do
vetor. O programa deve também imprimir o estado do vetor antes e após a inversão.*/

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
    printf("Vetor antes da troca de valores: \n");
    for (a = 0; a < Tamanho; a ++)
    {
        printf("%d ", vet[a]);
    }

    int cont = 1;
    int num1, num2;
    do
    {
        printf("\nInforme dois numeros inteiros M e N: ");
        scanf("%d%d", &num1, &num2);
        if (num1 > 0 && num1 <= 10 && num2 > 0 && num2 <= 10)
        {
            int aux = vet[num1-1];
            vet[num1-1] = vet[num2-1];
            vet[num2-1] = aux;
            cont = 0;
        }
        else
        {
            printf("Informe os valores entre 1 e 10! \n");
        }
        
    } while (cont != 0);

    printf("\nVetor apos a troca de valores: \n");
    for (a = 0; a < Tamanho; a ++)
    {
        printf("%d ", vet[a]);
    }
    getch();
}