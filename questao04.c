/*4. Escreva um programa que leia o número inteiro positivo e calcule o seu dobro, o seu
triplo, o seu quadrado, o seu cubo e a sua raiz quadrada.*/

#include <stdio.h>
#include <math.h>

void main(){
    int numero_1;
    printf("Informe um número inteiro não negativo: ");
    scanf("%d", &numero_1);
    int dobro = numero_1 * 2;
    int triplo = numero_1 * 3;
    int quadrado = pow (numero_1, 2);
    int cubo = pow (numero_1, 3);
    float raiz = sqrt(numero_1);
    printf("Resultado: \nDobro: %d \nTripo: %d \nQuadrado: %d \nCubo: %d \nRaiz: %.2f", dobro, triplo, quadrado, cubo, raiz);
    getch();
}
