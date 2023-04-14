/*28. Uma loja oferece tr�s formas de pagamento para os seus clientes. Caso a compra seja
paga � vista, a loja oferece um desconto de 10%. Caso a compra seja paga em tr�s
parcelas no cart�o de cr�dito, o cliente paga o pre�o original (sem descontos, mas sem
juros) da compra. Caso a compra seja paga em dez parcelas no cart�o de cr�dito, a loja
acrescenta uma taxa de juros de 20% sobre o valor da compra. Todas as dez parcelas
t�m exatamente o mesmo valor.
Com base nessas informa��es, escreva um programa que leia o valor da compra de um cliente e informe:
o valor da compra se ela for paga � vista, o valor de cada parcela se a compra for paga no cart�o e em
tr�s parcelas (porexemplo, 3 parcelas de R$ 50,00) e o valor de cada parcela se a compra for paga com o
cart�o de cr�dito e em dez parcelas.*/


#include <stdio.h>

int formaPagamento(float valor1){
    printf("Selecione qual � sua forma de pagamento...\n\n\n");
    printf("----------------Forma de Pagamento------------------\n\n");
    printf("\t\t � 1  -  A vista.\n\t\t � 2  -  3 vezes no cartao. \n\t\t � 3  -  10 vezes no cartao.");

    int chave;
    printf("\nDigite o numero indice da opcao desejada: ");
    scanf("%d", &chave);

    if(chave == 1){
        float valor_vista = valor1 / 1.1;
        printf("Primeira opcao escolhida! Total a pagar: R$ %.2f a vista", valor_vista);
    }else if(chave == 2){
        float valor_tres = valor1 / 3;
        printf("Segunda opcao escolhida! Total a pagar: 3 vezes de R$ %.2f", valor_tres);
    }else{
        float valor_dez = (valor1 * 1.2) / 10;
        printf("Terceira opcao escolhida! Total a pagar: 10 vezes de %.2f", valor_dez);
    }
}

void main(){
    float valor_compra;
    printf("Informe o valor bruto da compra: ");
    scanf("%f", &valor_compra);
    float total_compra = formaPagamento(valor_compra);
    getch();
}
