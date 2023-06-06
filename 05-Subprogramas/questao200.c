/*200. Escreva um programa que leia o valor do lado de um quadrado e calcule a sua área e
o seu perímetro. O programa deve ter um subprograma para calcular a área e outro
para calcular o perímetro.*/

#include <stdio.h>

float calculoArea(float lado1, float lado2)
{
    return lado1 * lado2;
}

float calculoPerimetro(float lado1, float lado2)
{
    return (lado1*2) + (lado2*2);
}

void main()
{
    float base, altura;
    printf("Informe o valor da base do quadrado: ");
    scanf("%f", &base);
    printf("Informe o valor da altura do quadrado: ");
    scanf("%f", &altura);
    float area = calculoArea(base, altura);
    float perimetro = calculoPerimetro(base, altura);
    printf("A area e a altura do quadrado sao respectivamente: %.2f e %2.f", area, perimetro);
    getch();
}