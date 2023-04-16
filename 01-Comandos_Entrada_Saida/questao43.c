/*43. Escreva um programa que leia o preço atual de uma ação e o seu preço anterior e
calcule a sua variação em termos percentuais. Por exemplo, se o preço atual for R$
10,00 e o preço anterior era R$ 5,00 a variação foi de 100%.*/

#include <stdio.h>
const int IndicePorcentagem = 100;

int calculoVariacao(float atual, float anterior){
    float diferenca = atual - anterior;
    float equacao = (diferenca * IndicePorcentagem) / ((int)anterior);
    return equacao;
}

void main(){
    float preco_atual, preco_anterior;
    printf("Informe o preco atual: ");
    scanf("%f", &preco_atual);
    printf("Informe o preco anterior: ");
    scanf("%f", &preco_anterior);
    float variacao = calculoVariacao(preco_atual, preco_anterior);
    printf("A variacao  foi de: %.2f%% \n", variacao);
    getch();
}
