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
    Nodo *nead;
} Fila;

Fila *criarFila()
{
    Fila *fil = (Fila *)malloc(sizeof(Fila));
    fil ->nead = NULL;
    return fil;
}

void push(Fila *fil, int value)
{
    Nodo *novo = (Nodo *)malloc(sizeof(Nodo));
    novo ->numero = value;
    novo ->proximo = NULL;
    if (fil == NULL)
    {
        fil ->nead = novo;
    }
    else 
    {
        Nodo *aux = fil ->nead;
        while (aux ->proximo != NULL)
        {
            aux = aux ->proximo;
        }
        aux ->proximo = novo;
    }
}

// terminar de acordo com as aulas "fotos no celular"