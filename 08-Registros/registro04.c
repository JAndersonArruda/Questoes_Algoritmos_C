/*02.Escreva um subprograma que receba um ponteiro para uma pilha e um número inteiro N 
e verifique quantas vezes o número N aparece na pilha.*/

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

int frequencia(Pilha *p, int n)
{
    int cont = 0;
    Nodo *aux = p ->topo;
    while (aux != NULL)
    {
        if (aux ->numero == n)
        {
            cont ++;
        }
        aux = aux ->proximo;
    }
    return cont;
}

//crie seu proprio procedimento principal para testar