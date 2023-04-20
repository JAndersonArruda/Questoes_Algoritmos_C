/*84. Escreva um programa que leia o peso e a altura de uma pessoa e verifique se ela está
dentro da faixa de peso adequada, ou se está abaixo ou acima do peso. Caso a pessoa
esteja fora do peso adequado o programa deve informar quantos Kg ela deve ganhar
ou perder para ficar dentro da faixa adequada. Para resolver este programa, considere
que o IMC ideal para uma pessoa deve estar entre 18 e 25.*/

#include <stdio.h>
#include <math.h>

void main(){
    float peso, altura;
    printf("Informe seu peso e sua altura respectivamente: ");
    scanf("%f%f", &peso, &altura);
    float valor_imc = peso / (pow(altura, 2));
    if(valor_imc >= 18 && valor_imc <= 25){
        printf("Voce esta na faixa considerada normal! De 18 a 25, com %.2f", valor_imc);
    }
    else if(valor_imc < 18){
        float ganhoPeso = ((peso * 18) / valor_imc) - peso;
        printf("Voce esta abaixo da faixa considerada normal, precisa engordar %.2f kg", ganhoPeso);
    }
    else{
        float perdaPeso = peso - ((peso * 25) / valor_imc);
        printf("Voce esta acima da faixa connsiderada normal, precisa emagrecer %.2f kg", perdaPeso);
    }
    getch();
}
