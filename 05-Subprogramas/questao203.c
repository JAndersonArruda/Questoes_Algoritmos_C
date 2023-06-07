/*203. Escreva um programa que leia o valor da base e da altura de um triângulo e calcule a
sua área, que deve ser calculada através de um subprograma.*/

#include <stdio.h>

float areaTriangulo(float base,  float altura)
{
    return (base * altura) / 2;
}

void main()
{
    float base, altura;
    printf("Informe o valor da base e altura da piramide: ");
    scanf("%f%f", &base, &altura);
    printf("A are da piramide eh: %.2f", areaTriangulo(base, altura));
    getch();
}