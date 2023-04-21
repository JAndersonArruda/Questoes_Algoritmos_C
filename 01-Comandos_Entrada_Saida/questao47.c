/*47. Um banco está realizando uma grande promoção em seus financiamentos. Ele financia
qualquer valor em 5 prestações. O valor da primeira prestação corresponde à 20% do
valor do empréstimo. Os valores das demais prestações correspondem ao valor da
parcela anterior acrescido de uma taxa de juros de 7%. Com base nestas informações,
escreva um programa que leia o valor a ser financiado por um cliente e calcule: o valor
de cada prestação, o valor total que o cliente vai pagar pelo empréstimo e o total de
juros que o cliente vai pagar pelo empréstimo.*/

#include <stdio.h>

const float Porcentagem = 1.20;
const float TaxaJuros = 1.07;

int valorParcelas(float valor){
    float parcela1 = (valor *  Porcentagem) - valor;
    float parcela2 = parcela1 * TaxaJuros;
    float parcela3 = parcela2 * TaxaJuros;
    float parcela4 = parcela3 * TaxaJuros;
    float parcela5 = parcela4 * TaxaJuros;
    float valorTotal = parcela1 + parcela2 + parcela3 + parcela4 + parcela5;
    float diferenca = valorTotal - valor;
    printf("De acordo com os dados oferecidos confira as informacoes de seu emprestimo!\n");
    printf("\nValor financiado --------- R$ %.2f", valor);
    printf("\nValor da 1 pracela ------- R$ %.2f", parcela1);
    printf("\nValor da 2 parcela ------- R$ %.2f", parcela2);
    printf("\nValor da 3 parcela ------- R$ %.2f", parcela3);
    printf("\nValor da 4 parcela ------- R$ %.2f", parcela4);
    printf("\nValor da 5 parcela ------- R$ %.2f", parcela5);
    printf("\nTotla de juros ----------- R$ %.2f", diferenca);
    printf("\nValor final a pagar ------ R$ %.2f \n", valorTotal);
}

void main(){
    float emprestimo;
    printf("Informe o valor do emprestimo: ");
    scanf("%f", &emprestimo);
    float resultado = valorParcelas(emprestimo);
    getch();
}
