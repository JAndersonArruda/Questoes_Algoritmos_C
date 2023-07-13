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
    novo ->proximo = p ->topo;
    p ->topo = novo;
}

int quantidade(Pilha *p)
{
    int cont = 0;
    Nodo *aux = p ->topo;
    while (aux != NULL)
    {
        cont ++;
        aux = aux ->proximo;
    }
    return cont;
}

void main()
{
    Pilha *p = criarPilha();
    int n;
    printf("Informe um numero innteiro: ");
    scanf("%d", &n);
    while (n != 0)
    {
        push(p, n);
        printf("Informe outro numero inteiro: ");
        scanf("%d", &n);
    }
    printf("Quantidade de registros da pilha: %d", quantidade(p));
    getch(); 
}