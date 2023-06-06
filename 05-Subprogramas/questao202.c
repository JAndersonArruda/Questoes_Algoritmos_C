/*202. Escreva um programa que leia o valor do raio de uma circunferência e calcule a sua
área e o seu comprimento. O programa deve fornecer um subprograma para calcular
a área e outro para calcular o comprimento.*/

#include <stdio.h>
#include <math.h>

const float PI = 3.14;

float circuloArea(float raio)
{
    return PI * (pow(raio, 2));
}

float circuloComprimento(float raio)
{
    return 2 * PI * raio;
}

void main()
{
    float raio;
    printf("Informe o raio da circunferencia: ");
    scanf("%f", &raio);
    printf("Area: %.2f \nComprimento: %.2f", 
        circuloArea(raio), circuloComprimento(raio));
    getch();
}