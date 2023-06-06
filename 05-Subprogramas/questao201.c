/*201. Escreva um programa que leia o número inteiro positivo e calcule o seu dobro, o seu
triplo, o seu quadrado, o seu cubo e a sua raiz quadrada. Cada uma das informações
solicitadas deve ser calculada através de um subprograma.*/

#include <stdio.h>
#include <math.h>

int calculoDobro(int num)
{
    return num *2;
}

int calculoTriplo(int num)
{
    return num *3;
}

int calculoQuadrdo(int num)
{
    return pow(num, 2);
}

int calculoCubo(int num)
{
    return pow(num, 3);
}

float calculoRaiz(int num)
{
    return sqrt((float)num);
}

void main()
{
    int num;
    printf("Informe o numero inteiro positivo: ");
    scanf("%d", &num);
    printf("Dobro: %d \nTriplo: %d \nQuadrado: %d \nCubo: %d \nRaiz Quadrada: %.2f", 
        calculoDobro(num), calculoTriplo(num), calculoQuadrdo(num), calculoCubo(num), calculoRaiz(num));
    getch();
}