/*207. Escreva um programa que leia um valor em polegadas e o converta para centímetros,
considerando que uma polegada equivale a 2.54 cm. A conversão deve ser realizada
através de um subprograma.*/

#include <stdio.h>

const float Polegada = 2.54;

float conversaoCentimeros(float medida)
{
    return medida * Polegada;
}

void main()
{
    float polegada;
    printf("Informe a distancia em polgadas para a converao em centimetro: ");
    scanf("%f", &polegada);
    printf("%.2f polegadas eh equivalente a %.2f polegadas", polegada, conversaoCentimeros(polegada));
    getch();
}