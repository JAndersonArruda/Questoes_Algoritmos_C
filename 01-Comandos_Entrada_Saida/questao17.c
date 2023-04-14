/*17. Escreva um programa que leia a área de uma casa e o valor cobrado por um arquiteto
por cada metro quadrado de um projeto arquitetônico e calcule o custo final do
projeto.*/

#include <stdio.h>

void main(){
    float area, custo_por_metro_quadrado;
    printf("Informe a area da casa em metros quadrados: ");
    scanf("%f", &area);
    printf("Informe o valor cobrado por cada metro quadrado: ");
    scanf("%f", &custo_por_metro_quadrado);
    float valor_total = area * custo_por_metro_quadrado;
    printf("O valor total a ser pago eh: R$ %.2f", valor_total);
    getch();
}
