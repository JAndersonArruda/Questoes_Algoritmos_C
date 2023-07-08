/*03.Escreva um subprograma que receba um ponteiro para uma pilha e verifique qual é o
maior número armmazenado na pilha*/

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

int max(Pilha *p)
{
    Nodo *regis =  p ->topo;
    int maxNumber = regis ->numero;
    while (regis != NULL)
    {
        regis = regis ->proximo;
        if (maxNumber < regis ->numero)
        {
            maxNumber = regis ->numero;
        }
    }
    return maxNumber;
}