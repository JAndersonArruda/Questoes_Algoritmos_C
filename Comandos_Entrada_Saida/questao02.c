/*2. Escreva um programa que leia três números e seus respectivos pesos e calcule a sua
média ponderada.*/

#include <stdio.h>

void main(){
    int numero_1, numero_2, numero_3;
    printf("Informe o primeioro número: ");
    scanf("%d", &numero_1);
    printf("Informe o segundo número: ");
    scanf("%d", &numero_2);
    printf("Informe o terceiro número: ");
    scanf("%d", &numero_3);
    float media_ponderada = (((numero_1*3) + (numero_2*2) + (numero_3*1)) / 6);
    printf("A média é: %.2f", media_ponderada);
    getch();
}
