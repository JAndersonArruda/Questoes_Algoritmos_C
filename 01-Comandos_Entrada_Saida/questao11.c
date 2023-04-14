/*11. Escreva um programa que leia um valor em real, a cotação atual do dolar e calcule o
valor informado pelo usuário em dólares.*/

#include <stdio.h>
#include <math.h>

const float Cotacao_Dolar = 5.04;
void main(){
    float valor_Real;
    printf("Informe o valor em Reais: ");
    scanf("%f", &valor_Real);
    float valor_Dolar = valor_Real / Cotacao_Dolar;
    printf("Resultado: \nO valor em Reais R$ %.2f equivale em Dolares: US$ %.2f", valor_Real, valor_Dolar);
    getch();
}
