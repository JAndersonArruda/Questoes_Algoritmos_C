/*12. Escreva um programa que leia um valor em polegadas e o converta para centímetros,
considerando que uma polegada equivale a 2.54 cm.*/

#include <stdio.h>

void main(){
    float valor_polegada;
    printf("Informe o valor equivalente em polegadas: ");
    scanf("%f", &valor_polegada);
    float valor_cetimetro = valor_polegada * 2.54;
    printf("Resultado: \nO valor em polegadas %.2f, equivale em centimetro a: %.2fcm", valor_polegada, valor_cetimetro);
    getch();
}
