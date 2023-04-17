/*67. Escreva um programa que leia o valor de um ano e verifique se ele � ou n�o bissexto.
Um ano � bissexto se ele for divis�vel por quatrocentos ou se se ele for divis�vel por 4
mas n�o for divis�vel por 100.*/

#include <stdio.h>

const int IndicaAnoBixesto1 = 400;
const int IndicaAnoBixesto2 = 4;
const int AntiAnoBixesto = 100;

void main(){
    int ano;
    printf("Informe o valor do ano: ");
    scanf("%d", &ano);
    int resto1 = ano % IndicaAnoBixesto1;
    int resto2 = ano % IndicaAnoBixesto2;
    int resto3 = ano % AntiAnoBixesto;
    if(resto1 == 0 || resto2 == 0 && resto3 != 0){
        printf("O ano %d eh um ano bissexto!", ano);
    }else{
        printf("O ano %d nao eh um ano bissexto!", ano);
    }
    getch();
}

