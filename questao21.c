/*21. Escreva um programa que leia o pre�o de produ��o de um determinado produto e a
margem de lucro desejada pelo fabricante e calcule qual deve ser o seu pre�o de
venda.*/

#include <stdio.h>

void main(){
    float preco, margem_lucro;
    printf("Informe o pre�o do produto: ");
    scanf("%f", &preco);
    printf("Informe a margem de lucro desejada: ");
    scanf("%f", &margem_lucro);
    float preco_final = preco + margem_lucro;
    printf("O valor total do porduto deve ser: R$ %.2f", preco_final);
    getch();
}
