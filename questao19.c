/*19. Escreva um programa que leia os valores de dois ângulos internos de um triângulo e
calcule o valor do terceiro ângulo.*/

#include <stdio.h>

const int Result_Angulo_Trinagulo = 180;

int anguloResltante(int valor1, int valor2){
    int resultante = Result_Angulo_Trinagulo - (valor1 + valor2);
    return resultante;
}

void main(){
    int angulo_1, angulo_2;
    printf("Informe o valor do primeiro angulo do triangulo: ");
    scanf("%d", &angulo_1);
    printf("Informe o valor do segundo angulo do triangulo: ");
    scanf("%d", &angulo_2);
    int angulo_3 = anguloResltante(angulo_1, angulo_2);
    printf("O terceiro angulo eh: %d", angulo_3);
    getch();
}
