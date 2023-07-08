/*05.Escreva um programa que leia um número inteiro não negativo e use uma pilha para imprimir 
o seu valor correspondenrte em binário.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct nodo
{
    int numero;
    struct nodo *proximo;
} Nodo;

typedef struct 
{
    Nodo *topo;
} Pilha;

Pilha *criarPilha()
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p ->topo = NULL;
    return p;
}

void push(Pilha *p, int value)
{
    Nodo *novo = (Nodo *)malloc(sizeof(Nodo));
    novo ->numero = value;
    novo ->proximo = p ->topo;
    p ->topo = novo;
}

void fatoracaoBinaria(Pilha *p, int num)
{
    while (num > 0)
    {
        int resto = num % 2;
        push(p, resto);
        num = num / 2;
    }
}

void printPilha(Pilha *p)
{
    Nodo *marc = p ->topo;
    while (marc != NULL)
    {
        int alg = marc ->numero;
        printf("%d ", alg);
        marc = marc ->proximo;
    }
}

void main()
{
    Pilha *p = criarPilha();
    int num;
    printf("Informe um numero inteiro não negativo: ");
    scanf("%d", &num);
    while (num < 0)
    {
        printf("Informe um numero inteiro não negativo: ");
        scanf("%d", &num);
    }
    fatoracaoBinaria(p, num);
    printf("\nO valor do numero %d em binario eh: ", num);
    printPilha(p);
    getch();
}