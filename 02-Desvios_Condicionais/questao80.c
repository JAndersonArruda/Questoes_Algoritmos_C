/*80. Escreva um programa que leia os coeficientes a, b e c de uma equação do 2º grau e
calcule todas as suas raízes reais.*/

#include <stdio.h>
#include <math.h>

void main(){
    float coeficiente_a, coeficiente_b, coeficiente_c;
    printf("Informe os coeficientes a, b e c da equacao: ");
    scanf("%f%f%f", &coeficiente_a, &coeficiente_b, &coeficiente_c);
    float delta = pow(coeficiente_b, 2) - (4*coeficiente_a*coeficiente_c);
    float raiz1, raiz2;
    if(delta > 0){
        raiz1 = (-coeficiente_b + sqrt(delta)) / (2*coeficiente_a);
        raiz2 = (-coeficiente_b - sqrt(delta)) / (2*coeficiente_a);
        printf("A equacao possui duas raizes reais distintas, %.2f e %.2f", raiz1, raiz2);
    }
    else if(delta == 0){
        raiz1 = (-coeficiente_b + sqrt(delta)) / (2*coeficiente_a);
        raiz2 = (-coeficiente_b - sqrt(delta)) / (2*coeficiente_a);
        printf("A equacao possui duas raizes reais iguais, %.2f e %.2f", raiz1, raiz2);
    }
    else{
        printf("A equacao nao possui raiz real.");
    }
    getch();
}
