/*55. Lázaro está muito feliz por ter enfim conseguido construir a sua casa própria.
Sabendose que a construção durou 180 dias de trabalho, escreva um programa que leia o
número de pedreiros que trabalhavam na obra, o número de ajudantes e o valor da
diária do pedreiro e calcule quanto Lázaro gastou com mão de obra. Para resolver este
programa, considere que todos os pedreiros e ajudantes trabalharam todos os dias da
obra e que o valor da diária de cada ajudante corresponde à metade do valor da diária
do pedreiro.*/

#include <stdio.h>

const int TempConstrucao = 180;

void main(){
    int pedreiros, ajudantes;
    float diaria;
    printf("Informe a quantidade de pedreiros e ajudantes necessarios na obra: ");
    scanf("%d%d", &pedreiros, &ajudantes);
    printf("Informe o valor da diaria dos pedreiros: ");
    scanf("%f", &diaria);
    float diariaAjudante = diaria / 2;
    float valorGasto = ((diaria * pedreiros) + (diariaAjudante * ajudantes)) * TempConstrucao;
    printf("O valor gasto com mao de obra por Lazaro foi: R$ %.2f \n", valorGasto);
    getch();
}
