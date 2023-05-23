/*118. Escreva um programa que leia um n�mero N e imprima os N primeiros n�meros
primos positivos.*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int number;
    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &number);
    int contPrimo = 1;
    int i;
    int a;
    for(i = 2; contPrimo <= number; i ++)
    {
        int indPrimo = 0;
        for(a = 1; a <= i; a ++)
        {
            if(i % a == 0)
                indPrimo ++;
        }
        if(indPrimo == 2)
        {
            contPrimo ++;
            printf("%d ", i);
        }
    }
    
}
