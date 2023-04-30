/*52. Um provedor de internet oferece um plano promocional para os seus clientes. Neste
plano, ele paga uma mensalidade de R$ 80,00 e pode acessar at� 100 GB de dados.
Caso a quantidade de dados acessados seja superior a este limite, ele deve pagar uma
taxa adicional de R$ 5,00 por cada GB extra acessado. Com base nestas informa��es,
escreva um programa que leia a quantidade de dados acessados pelo cliente durante
um m�s (em GB) e calcule o valor da sua conta, considerando que esta quantidade
nunca � inferior a 100 GB..*/

#include <stdio.h>

const float Taxa = 5;
const float Preco = 80;
const int Limite = 100;

void main(){
    float quantDados;
    printf("Informe a quantidade mensal em GB acessada: ");
    scanf("%f", &quantDados);
    float valorFinal = (((int)quantDados % Limite) * Taxa) + Preco;
    printf("O valor total da sua conta eh: %.2f", valorFinal);
    getch();
}
