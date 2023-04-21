/*48. Uma financeira est� oferecendo uma nova modalidade de empr�stimo para os seus
clientes. Nesta modalidade, o cliente pode pagar o valor financiado em at� 120
parcelas, todas as parcelas com o mesmo valor. O valor de cada parcela corresponde
ao valor do empr�stimo dividido pelo n�mero de parcelas, mais uma taxa de 4% sobre
o valor total financiado. Com base nestas informa��es, escreva um programa que leia
um valor a ser financiado pelo cliente e o n�mero de parcelas desejadas e calcule o
valor de cada parcela e o valor total que o cliente pagar� pelo empr�stimo.*/

#include <stdio.h>

const float TaxaJuros = 1.04;

int valorParcelas(float valor1, int valor2){
    float valorEmprestimo = valor1 * TaxaJuros;
    float valorParcela = (float)valorEmprestimo / valor2;

    printf("De acordo com os dados oferecidos confira as informacoes de seu emprestimo!\n");
    printf("\nValor financiado ------------- R$ %.2f", valor1);
    printf("\nValor por parcela ------------ R$ %.2f", valorParcela);
    printf("\nQuantidade de parcelas -------    %d", valor2);
    printf("\nValor final a pagar ---------- R$ %.2f \n", valorEmprestimo);
}

void main(){
    float emprestimo;
    int numParcelas;
    printf("Informe o valor do emprestimo: ");
    scanf("%f", &emprestimo);
    printf("Informe  quantidade de parcelas, limite de ate 120 parcelas: ");
    scanf("%d", &numParcelas);
    float resultado = valorParcelas(emprestimo, numParcelas);
    getch();
}
