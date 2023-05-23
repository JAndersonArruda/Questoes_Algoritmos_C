/*120. Escreva um programa que leia um número inteiro positivo N e imprima a maior
quantidade possível de números inteiros positivos de forma que a soma de todos os
números impressos seja menor ou igual a N.*/

# include <stdio.h>
# include <stdlib.h>

void main()
{
    int num;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    int soma = 0;
    int alg = 1;
    while(soma + alg <= num)
    {
        printf("%d ", alg);
        soma += alg;
        alg ++;
    }
    getch();
}
