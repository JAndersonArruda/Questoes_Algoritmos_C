/*53. Escreva um programa que leia o m�s e o ano em que um preso come�ar� a cumprir a
sua pena e o tamanho da pena (em n�mero de anos e n�mero de meses, por exemplo,18 anos
e 5 meses) e determine o m�s e o ano em que ele terminar� de cumprir a sua
pena. Para resolver esta quest�o, considere que o ano ser� sempre maior ou igual a
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
