/*20. Em uma determinada cidade, cada m de um terreno está avaliado em R$ 300,00.
Escreva um programa que leia o comprimento e a largura de um terreno localizado
nesta cidade e calcule o seu valor de mercado.*/

#include <stdio.h>

const float Valor_Metro_Quadrado = 300.00;

int valorMercado(float valor1, float valor2){
   float area = valor1 * valor2;
   float valor_mercado = area * Valor_Metro_Quadrado;
   return valor_mercado;
}

void main(){
    float comprimento, largura;
    printf("Informe o comprimento do terreno em metros: ");
    scanf("%f", &comprimento);
    printf("Informe a largura do terreno em metros: ");
    scanf("%f", &largura);
    float valor_total = valorMercado(comprimento, largura);
    printf("O valor total do terreno eh: R$ %.2f", valor_total);
    getch();
}
