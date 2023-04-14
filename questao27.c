/*27. Escreva um programa que leia o comprimento e a largura de uma cisterna e a
quantidade de litros que o usuário deseja armazenar na mesma e determine quantos
metros ele deve encher a cisterna para obter a quantidade de litros desejada.*/

#include <stdio.h>
#include <math.h>

const float PI = M_PI;

int volumeAgua(float valor1, float valor2, float valor3){
    const float Raio = valor2 / 2;
    float metro_cubico = valor3 / 1000;
    float altura = (PI * pow(Raio, 2)) / metro_cubico;
    return altura;
}

void main(){
    float comprimento, largura, litros;
    printf("Informe o valor do comprimento da sua cisterna: ");
    scanf("%f", &comprimento);
    printf("Informe o valor da largura da sua cisterna: ");
    scanf("%f", &largura);
    printf("Informe o a quantidade de litros com que deseja enche-la: ");
    scanf("%f", &litros);
    float altura_nececessaria = volumeAgua(comprimento, largura, litros);
    printf("Sera necessario encher a cisterna ate %.2f m ", altura_nececessaria);
    getch();
}
