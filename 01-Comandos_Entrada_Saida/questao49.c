/*49. Uma revendedora de ve�culos resolveu fazer uma promo��o em seus ve�culos. Nesta
revendedora, o pre�o de um ve�culo � calculado atrav�s do seu pre�o de compra, mais
uma taxa de 20% de IPI, 17% de ICMS e uma margem de lucro de 20%. Nesta
promo��o, a revendedora resolveu tirar o valor do IPI. Com base nestas informa��es,
escreva um programa que leia o pre�o atual de um ve�culo e calcule qual deve ser o
seu pre�o na promo��o.*/

#include <stdio.h>

void main(){
    float preco;
    printf("Informe o preco atual do veiculo: ");
    scanf("%f", &preco);
    float valorFabrica = preco / 1.57;
    float valorIPI = valorFabrica * 0.20;
    float valorPromocao = preco - valorIPI;
    printf("O valor do veiculo na promocao eh: %.2f", valorPromocao);
    getch();
}
