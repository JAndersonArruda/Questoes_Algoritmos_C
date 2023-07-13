#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct 
{
    char nome[100];
    char telefone[20];
} Pessoa;

typedef struct nodo
{
    struct nodo *anterior;
    Pessoa contato;
    struct nodo *proximo;
} Nodo;

typedef struct 
{
    Nodo *inicio;
} Lista;

Lista *criarLista()
{
    Lista *list = (Lista *)malloc(sizeof(Lista));
    list ->inicio = NULL;
    return list;
}

void inserir(Lista *list, char name[100], char fone[20])
{
    Nodo *novo = (Nodo *)malloc(sizeof(Nodo));
    novo ->anterior = NULL;
    novo ->proximo = NULL;
    strcpy(novo ->contato.nome, name);
    strcpy(novo ->contato.telefone, fone);
    if (list ->inicio == NULL)
    {
        list ->inicio = novo;
    }
    else 
    {
        Nodo *aux = list ->inicio;
        int comp = strcmp(name, novo ->contato.nome);
        while (comp > 0 && aux ->proximo != NULL)
        {
            aux = aux ->proximo;
            comp = strcmp(name, novo ->contato.nome);
        }
        if (comp > 0)
        {
            aux ->proximo = novo;
            novo ->anterior = aux;
        }
        else if (list ->inicio == aux)
        {
            aux ->anterior = novo;
            novo ->proximo = aux;
            list ->inicio = novo;
        }
        else 
        {
            novo ->anterior = aux ->anterior;
            novo ->proximo = aux;
            aux ->anterior ->proximo = novo;
            aux ->anterior = novo;
        }
    }
}