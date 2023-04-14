/*7. Escreva um programa que leia o valor da base e da altura de um triângulo e calcule qual é
a sua área.*/

#include <stdio.h>

void main(){
    float base, altura;
    printf("Informe o valor correspondente da base do triangulo: ");
    scanf("%f", &base);
    printf("Informe o valor correspondente da altura do triangulo: ");
    scanf("%f", &altura);
    float area = (base * altura) / 2;
    printf("Resultdo: \nA area do tringulo eh: %.2f", area);
    getch();
}
