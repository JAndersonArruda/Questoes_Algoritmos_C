/*42. Escreva um programa que leia o peso e a altura de uma pessoa e determine o seu
índice de massa corporal.*/

#include <stdio.h>

int calculoIMC(float valor1, float valor2){
    float valor_imc = valor1 / (valor2 * valor2);
    return valor_imc;
}

void main(){
    float peso, altura;
    printf("Informe seu peso: ");
    scanf("%f", &peso);
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    float resultado = calculoIMC(peso, altura);
    printf("Seu Indice de Masa Muscular eh: %.2f \n", resultado);
    getch();
}
