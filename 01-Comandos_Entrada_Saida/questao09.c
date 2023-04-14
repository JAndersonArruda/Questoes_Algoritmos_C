/*9. Escreva um programa que leia o valor de uma distância percorrida em km e o tempo
gasto em horas e calcule a velocidade média em m/s.*/

#include <stdio.h>

const int Kilometros_em_Metros = 1000;
const int Hora_em_Segundos = 3600;
void main(){
    float distancia, tempo;
    printf("Informe a distacia percorrida em km: ");
    scanf("%f", &distancia);
    printf("Informe o tempo do percurso em h: ");
    scanf("%f", &tempo);
    float distancia_Metros = distancia * Kilometros_em_Metros;
    int tempo_Segundos = tempo * Hora_em_Segundos;
    float velocidade = distancia_Metros / Hora_em_Segundos;
    printf("Resultado: \nA velocidade media eh: %.2fm/s", velocidade);
    getch();
}
