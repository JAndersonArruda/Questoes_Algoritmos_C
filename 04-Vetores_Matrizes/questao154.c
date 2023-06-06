/*154. Escreva um programa que leia dez números inteiros e, após finalizar a leitura,
imprima todos os números lidos na ordem inversa em que eles foram digitados.*/

#include <stdio.h>

const int Tamanho = 10;

void main()
{
    int vet[10];
    int a;
    for(a = 0; a < Tamanho; a ++)
    {
        printf("Informe um numero inteiro: ");
        scanf("%d", &vet[a]);
    }
    for(a = Tamanho-1; a >= 0 ; a --)
    {
        printf("%d ", vet[a]);
    }
    getch();
}