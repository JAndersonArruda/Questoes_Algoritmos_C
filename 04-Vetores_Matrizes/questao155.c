/*155. Escreva um programa que leia dez números inteiros e, após finalizar a leitura, leia um
número inteiro N (entre 1 e 10) e imprima qual foi o enésimo número digitado pelo
usuário.*/

#include <stdio.h>

const int Tam = 10;

void main()
{
    int vet[Tam];
    int a;
    for (a = 0; a < Tam; a ++)
    {
        printf("Informe um numero inteiro: ");
        scanf("%d", &vet[a]);
    }

    int cont = 1;
    int num;

    do
    {
        printf("\nInforme um numero inteiro N: ");
        scanf("%d", &num);
        if (num > 0 && num <= 10)
        {
            printf("O numero de ordem %d digitado foi: %d", num, vet[num-1]);
            cont = 0;
        }
        else
        {
            printf("Informe um valor entre 1 e 10! \n");
        }
        
    } while (cont != 0);
    getch();
}