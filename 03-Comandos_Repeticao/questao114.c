/*114. Escreva um programa que leia dois números inteiros M e N e calcule o valor de M elevado a N. A
potenciação deve ser calculada através de um comando de repetição, sem a utilização
de qualquer função oferecida pela linguagem de programação.*/

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
