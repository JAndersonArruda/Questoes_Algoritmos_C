/*38. Escreva um programa que leia um valor em segundos e converta para a forma X horas
Y minutos e Z segundos. Por exemplo, o valor 3670 equivale a 1 hora 1 minutos e 10
segundos.*/

#include <stdio.h>

const int Hora_Segundos = 3600;
const int Hora_Minutos = 60;

void main(){
    int segundos;
    printf("Informe um periodo de tempo qualquer em segundos: ");
    scanf("%d", &segundos);
    int horas = segundos / Hora_Segundos;
    int resto_minutos = segundos % Hora_Segundos;
    int minutos = resto_minutos / Hora_Minutos;
    int segundos_final = resto_minutos % Hora_Minutos;
    printf("%d segundos corresponde a %d h, %d min e %d seg\n", segundos, horas, minutos, segundos_final);
    getch();
}
