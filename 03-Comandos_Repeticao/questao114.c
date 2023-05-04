/*114. Escreva um programa que leia dois n�meros inteiros M e N e calcule o valor de M elevado a N. A
potencia��o deve ser calculada atrav�s de um comando de repeti��o, sem a utiliza��o
de qualquer fun��o oferecida pela linguagem de programa��o.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int numberM, numberN;
    printf("Informe um numero M e N: ");
    scanf("%d%d", &numberM, &numberN);
    int potencia = 1;
    int i;
    for(i = 2; i <= abs(numberN) + 1; i++)
    {
        potencia *= numberM;
    }
    if(numberN < 0)
    {
        float poten = (float)1 / potencia;
        printf("Resultado = %.2f", poten);
    }
    else
    {
        printf("Resultado = %d", potencia);
    }
    getch();
}
