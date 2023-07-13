/*Escreva um programa que leia vários números inteiros e após terminar a leitura imprima todos 
os números informados pelo usuário na ordem inversa em que foram informados. O processo de 
leitura deve ser encerado quando o usuário informar o valor zero que não deve ser processado.*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//registro que compões a pilha, dois modulos
typedef struct nodo
{
    int numero; 
    struct nodo *proximo;   //campo-ponteiro que aponta para registro type Nodo
} Nodo;

//registro pilha
typedef struct
{
    Nodo *topo;   //campo-ponteiro que aponta o registro type Nodo do topo da pilha
} Pilha;


//subprograma do tipo Pilha
Pilha *criarPilha()
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));   //pedido de memoria para um resgistro type Pilha
    p ->topo = NULL;
    return p;   //retorna um ponteiro type Pilha
}

//subprograma para adicionar valores em registros type Nodo na pilha
void push(Pilha *p, int n)
{
    Nodo *novo = (Nodo *)malloc(sizeof(Nodo));   //pedido de memoria para um resgistro type Nodo
    novo ->numero = n;
    novo ->proximo = p ->topo;
    p ->topo = novo;    //atualização do campo-ponteiro topo do registro type Pilha
}

//subprograma para pegar o numero do registro type Nodo localizado no topo da pilha e apaga-lo 
int pop(Pilha *p)
{
    Nodo *aux = p ->topo ->numero;    //ponteiro aponta para o registro type Nodo a ser apagado
    int resultado = aux ->numero;    //variavel que armazena o valor do campo numero
    p ->topo = aux ->proximo;     //atualização do campo-ponteiro topo
    free(aux);     //apagando registro apontado por ponteiro aux type Nodo
    return resultado;     //returna o valor do campo numero do registro type Nodo que foi apadago
}

//subprograma que verifica o campo de a pilha possui registros
int estaVazia(Pilha *p)
{
    if(p ->topo == NULL)     //se estiver vazia retorne 1
    {
        return 1;
    }
    return 0;   //caso contrario retorne 0
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
    printf("Os numeros informados foram: ");
    while (estaVazia(p) == 0)
    {
        n = pop(p);
        printf("%d \n", n);
    }
    getch(); 
}