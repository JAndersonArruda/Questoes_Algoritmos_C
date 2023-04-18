/*79. Escreva um programa que leia os coeficientes a, b e c de uma equação do 2º grau e
verifique a quantidade de raízes reais da equação.*/

#include <stdio.h>

void main(){
    float coeficiente_a, coeficiente_b, coeficiente_c;
    printf("Informe os coeficientes a, b e c da equacao: ");
    scanf("%f%f%f", &coeficiente_a, &coeficiente_b, &coeficiente_c);
    if((coeficiente_b*coeficiente_b) - (4*coeficiente_a*coeficiente_c) > 0){
        printf("A equacao possui duas raizes reais distintas.");
    }
    else if((coeficiente_b*coeficiente_b) - (4*coeficiente_a*coeficiente_c) == 0){
        printf("A equacao possui duas raizes reais iguais.");
    }
    else{
        printf("A equacao nao possui raiz real.");
    }
    getch();
}
