/*37. Escreva um programa que leia um número positivo entre 1 e 9999 e calcule o valor da
unidade de milhar, da centena, da dezena e da unidade.*/

#include <stdio.h>

const int Milhar = 1000;
const int Centena = 100;
const int Dezena = 10;

void main(){
    int numero;
    printf("Informe o valor de um numero de 1 a 9999: ");
    scanf("%d", &numero);
    int milhar = numero / Milhar;
    int resto = numero % Milhar;
    int centena = resto / Centena;
    resto = resto % Centena;
    int dezena = resto / Dezena;
    int unidade = resto % Dezena;
    printf("A unidade de milhar corresponde a: %d \n", milhar);
    printf("A unidade de centena corresponde a: %d \n", centena);
    printf("A unidade de dezena corresponde a: %d \n", dezena);
    printf("A unidade de unidade corresponde a: %d \n", unidade);
    getch();
}
