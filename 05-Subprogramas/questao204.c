/*204. Escreva um programa que leia o valor de cinco temperaturas em Celsius e, para cada
valor lido, calcule o seu valor correspondente em Fahrenheit e em Kelvin. Os cálculos
das conversões devem ser realizados através de subprogramas.*/

#include <stdio.h>

const int Tam = 5;

float conversaoFahrenheit(float grau)
{
    return (grau * 9/5) + 32;
}

float conversaoKelvin(float grau)
{
    return grau + 273.15;
}

void main()
{
    float vet[Tam];
    int a;
    for(a = 0; a < Tam; a ++)
    {
        printf("Informe uma temperatura em Celsius: ");
        scanf("%f", &vet[a]);
    }
    for(a = 0; a < Tam; a ++)
    {
        printf("%.2f em --- Fahrenheit: %.2f | Celsius: %.2f \n",vet[a], 
            conversaoFahrenheit(vet[a]), conversaoKelvin(vet[a]));
    }
    getch();
}