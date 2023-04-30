/*49. Uma revendedora de veículos resolveu fazer uma promoção em seus veículos. Nesta
revendedora, o preço de um veículo é calculado através do seu preço de compra, mais
uma taxa de 20% de IPI, 17% de ICMS e uma margem de lucro de 20%. Nesta
promoção, a revendedora resolveu tirar o valor do IPI. Com base nestas informações,
escreva um programa que leia o preço atual de um veículo e calcule qual deve ser o
seu preço na promoção.*/

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
