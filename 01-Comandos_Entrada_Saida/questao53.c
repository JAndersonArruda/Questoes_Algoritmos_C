/*53. Escreva um programa que leia o mês e o ano em que um preso começará a cumprir a
sua pena e o tamanho da pena (em número de anos e número de meses, por exemplo,18 anos
e 5 meses) e determine o mês e o ano em que ele terminará de cumprir a sua
pena. Para resolver esta questão, considere que o ano será sempre maior ou igual a
2000.*/

#include <stdio.h>

void main(){
    int mes, ano;
    printf("Informe o mes e o ano em que o detento ira comecar sua pena: ");
    scanf("%d%d", &mes, &ano);
    int tamMes, tamAno;
    printf("Informe o tamanho da pena do detento em anos e mes: ");
    scanf("%d%d", &tamAno, &tamMes);
    ano += ((mes + tamMes) / 12) + tamAno;
    mes = (((mes - 1) + tamMes) % 12) + 1;
    printf("O detento ira cumprir sua pena em %02d/%d", mes, ano);
    getch();
}
