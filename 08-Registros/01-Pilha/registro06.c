/*04.Escreva um subprograma que receba um ponteiro para uma pilha e imprima todos os números 
armazenados na pilha*/


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

void push(Pilha *p, int n)
{
    Nodo *novo = (Nodo *)malloc(sizeof(Nodo));
    novo ->numero = n;
    novo -> proximo = p ->topo;
    p ->topo = novo;
}

void imprimir(Pilha *p)
{
    Nodo *marc = p ->topo;
    while (marc != NULL)
    {
        int num = marc ->numero;
        printf("%d ", num);
        marc = marc ->proximo;
    }
}

//crie seu proprio procedimento principal para testar