/*111. Escreva um programa que leia o termo inicial e a razão de uma PA e um número
inteiro positivo N e imprima os N primeiros termos da progressão.*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int inicio, razao, fim;
    printf("Informe o inicio e a razao da progressao aritmetica: ");
    scanf("%d%d", &inicio, &razao);
    printf("Informe o quantidade de numeros a serem revelados da progressao aritmetica: ");
    scanf("%d", &fim);
    printf("PA %d ", inicio);
    int i;
    for(i = 1; i <= fim; i++)
    {
        inicio += razao;
        printf("%d ", inicio);
    }
    getch();
}
