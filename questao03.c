/*3. Escreva um programa que leia o valor do lado de um quadrado e calcule a sua área e o
seu perímetro.*/

#include <stdio.h>
#include <math.h>

void main(){
    float lado;
    printf("Informe o valor do lado do quadrado: ");
    scanf("%f", &lado);
    float area = pow (lado, 2);
    float perimetro = lado * 4;
    printf("Resultado: \nÁrea: %.2f \nPerímetro: %.2f", area, perimetro);
    getch();
}
