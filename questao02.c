/*2. Escreva um programa que leia tr�s n�meros e seus respectivos pesos e calcule a sua
m�dia ponderada.*/

#include <stdio.h>

void main(){
    int numero_1, numero_2, numero_3;
    printf("Informe o primeioro n�mero: ");
    scanf("%d", &numero_1);
    printf("Informe o segundo n�mero: ");
    scanf("%d", &numero_2);
    printf("Informe o terceiro n�mero: ");
    scanf("%d", &numero_3);
    float media_ponderada = (((numero_1*3) + (numero_2*2) + (numero_3*1)) / 6);
    printf("A m�dia �: %.2f", media_ponderada);
    getch();
}
