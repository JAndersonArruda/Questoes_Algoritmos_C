/*120. Escreva um programa que leia um n�mero inteiro positivo N e imprima a maior
quantidade poss�vel de n�meros inteiros positivos de forma que a soma de todos os
n�meros impressos seja menor ou igual a N.*/

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
