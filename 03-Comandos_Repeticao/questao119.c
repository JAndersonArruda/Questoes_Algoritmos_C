/*119. Escreva um programa que leia um número inteiro N e imprima todos os termos da
série de Fibonacci que são menores ou iguais a N.*/

# include <stdio.h>
# include <stdlib.h>

void main()
{
    int num;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    int ulti = 0;
    int atual = 0;
    int prox = 1;
    while(prox <= num)
    {
        printf("%d ", prox);
        ulti = atual;
        atual = prox;
        prox = atual + ulti;
    }
    getch();
}
