/*161. Escreva um programa que leia um vetor de vinte caracteres e verifique se o vetor é
ou não um palíndromo.*/

#include <stdio.h>
#include <stdlib.h>

const int Tamanho = 6;

void main()
{
    char vet[Tamanho];
    int a;
    for (a = 0; a < Tamanho; a ++)
    {
        fflush(stdin);
        printf("Informe um caractere: ");
        scanf("%c", &vet[a]);
        fflush(stdin);
    }
    int cont = 0;
    for (a = 0; a < Tamanho/2; a ++)
    {
        if (vet[a] == vet[(Tamanho-1)-a])
        {
            cont ++;
        }
    }
    if (cont == Tamanho/2)
    {
        printf("O vetor é um palindromo.");
    }
    getch();
}