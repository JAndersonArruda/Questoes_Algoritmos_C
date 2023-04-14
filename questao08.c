/*8. Escreva um programa que leia o valor de uma temperatura em Celsius e calcule o seu
valor correspondente em Fahrenheit e em Kelvin.*/

#include <stdio.h>

void main(){
    float temperatura;
    printf("Informe o valor da temperatura em Celsius: ");
    scanf("%f", &temperatura);
    float temperat_Fahrenheit = (temperatura * (9 / 5)) + 32;
    float temperat_Kelvin = temperatura + 273.15;
    printf("Resultado::\nTemperatura em Fahrenheit: %.2f \nTemperatura em Kelvin: %.2f", temperat_Fahrenheit, temperat_Kelvin);
    getch();
}
