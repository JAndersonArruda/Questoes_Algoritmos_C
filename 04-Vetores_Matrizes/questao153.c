/*153. Escreva um programa que leia dez números inteiros e, após finalizar a leitura,
imprima todos os números lidos na mesma ordem em que eles foram digitados.*/

#include <stdio.h>

const int Tamanho = 10;

void main()
{
    int vet[Tamanho];
    int a;
    for(a = 0; a < 10; a ++)
    {
        printf("Informe um numero inteiro: ");
        scanf("%d", &vet[a]);
    }
    for(a = 0; a < 10; a ++)
    {
        printf("%d ", vet[a]);
    }
    getch();
}