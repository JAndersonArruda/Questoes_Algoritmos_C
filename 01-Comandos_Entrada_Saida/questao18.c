/*18. Escreva um programa que leia o valor do seno de um ângulo e calcule o valor do seu
cosseno.*/

#include <stdio.h>
#include <math.h>

int calculoCosseno(int valor_seno){
    float cosseno = (1 - pow(valor_seno, 2));
    return cosseno;
}
void main(){
    float seno;
    printf("Informe o seno de um angulo: ");
    scanf("%f", &seno);
    float resultado = calculoCosseno(seno);
    printf("O cosseno eh: %.2f \n", resultado);
    getch();
}
