/*72. João resolveu poupar dinheiro para comprar um carro. Para isso, ele decidiu que todo
mês irá poupar 25% do seu salário, até conseguir juntar um bom valor para ser dado
como entrada. Com base nestas informações, escreva um programa que receba como
entrada o valor do salário atual de João e o valor que ele deseja juntar como entrada e
calcule quanto tempo ele terá que trabalhar para conseguir juntar o valor desejado. A
resposta deve ser dada na forma x anos e y meses.*/

#include <stdio.h>

int calculoTempo(float valor1, float valor2){
    float porcentagem = (valor1 * 1.25) - valor1;
    float tempoMes = valor2 / porcentagem;
    int ano = tempoMes / 12;
    int mes = (int)tempoMes % 12;
    printf("O valor %.2f sera alcancado em %d anas e %d meses.", valor2, ano, mes);
}


void main(){
    float salario, salarioEsperado;
    printf("Informe seu salario atual: ");
    scanf("%f", &salario);
    printf("Informe o valor que acumular: ");
    scanf("%f", &salarioEsperado);
    float tempoFinal = calculoTempo(salario, salarioEsperado);
    getch();
}
