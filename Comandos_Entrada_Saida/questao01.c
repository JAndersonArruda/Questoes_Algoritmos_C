/*1. Escreva um programa que leia três números inteiros e calcule a sua média aritmética.*/

#include <stdio.h>

void main(){
    int numero_1, numero_2, numero_3;
    printf("Informe o primeioro número: ");
    scanf("%d", &numero_1);
    printf("Informe o segundo número: ");
    scanf("%d", &numero_2);
    printf("Informe o terceiro número: ");
    scanf("%d", &numero_3);
    float media = (numero_1 + numero_2 + numero_3) / 3;
    printf("A média é: %.2f", media);
    getch();
}
