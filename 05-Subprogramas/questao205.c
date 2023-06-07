/*205. Escreva um programa que leia o valor de uma distância percorrida em km e o tempo
gasto em horas e calcule a velocidade média em m/s. A conversão deve ser realizada
através de um subprograma.*/

#include <stdio.h>

const int Kilometro = 1000;
const int Hora = 3600;

float conversaoMetroPorSegundo(float medida, float tempo)
{
    float metros = medida * Kilometro;
    float segundos = tempo * Hora;
    return metros / segundos;
}

void main()
{
    float distancia, tempo;
    printf("Informe a distacia em kilometros e o tempo em horas do percurso percorrido: ");
    scanf("%f%f", &distancia, &tempo);
    printf("A velocidade Media em m/s do trajeto informado foi de %.2f", 
        conversaoMetroPorSegundo(distancia, tempo));
        getch();
}