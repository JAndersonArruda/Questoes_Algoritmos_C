/*40. Escreva um programa que leia o valor total que um cliente consumiu em um
restaurante e determine o valor final da sua conta, considerando que o restaurante
cobra uma taxa de serviço de 10 % e uma taxa de couvert artístico de R$ 10,00.*/

#include <stdio.h>

void main(){
    float valor_bruto;
    printf("Informe o valor bruto da conta do cliente: ");
    scanf("%f", &valor_bruto);
    float valor_final = (valor_bruto * 1.1) + 10.00;
    printf("O valor final a ser pago eh: R$ %.2f", valor_final);
    getch();
}
