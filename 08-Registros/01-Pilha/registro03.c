/*01.Escreva um subprograma que receba um ponteiro para uma pilha se calcule a soma de todos
 os números armazenados.*/

//Pilha com base nos resgistros 01 e 02.

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

int soma(Pilha *p)
{
    int soma = 0;
    Nodo *aux = p ->topo;
    while (aux != NULL)
    {
        soma += aux ->numero;
        aux = aux ->proximo;
    }
}

void main()
{
    Pilha *p = criarPilha();
    int num;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    while(num != 0)
    {
        push(p, num);
        printf("Informe outro numero inteiro: ");
        scanf("%d", &num);
    }
    int resultSoma = soma(p);
    printf("O resultado da soma dos numeros eh: %d", resultSoma);
    getch();
}