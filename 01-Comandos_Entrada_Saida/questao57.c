/*57. Escreva um programa que leia o valor de uma passagem em reais e em milhas e, em
seguida, leia o valor da passagem (em reais) que Caio deseja comprar e calcule quantas
milhas ele precisa juntar para que ele n�o precise pagar pela passagem. Para resolvereste
programa, considere que a propor��o entre o valor da milha e o valor em reais � a
mesma para todos os v�os da companhia a�rea.*/

#include <stdio.h>

void main(){
    float valorReis, valorMilhas;
    printf("Informe o valor de qualquer passagem em reais e em milhas: ");
    scanf("%f%f", &valorReis, &valorMilhas);
    float passagem;
    printf("Informe o valor da sua passagem em reais: ");
    scanf("%f", &passagem);
    float passagemMilhas = (passagem * valorMilhas) / valorReis;
    printf("Sua passagem eh correspondente em Milhas a: %.2f", passagemMilhas);
    getch();
}
