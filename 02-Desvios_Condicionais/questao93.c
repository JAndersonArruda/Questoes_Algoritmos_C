/*93. Escreva um programa em que leia um número inteiro entre 1000 e 9999 e verifique se
o número lido é ou não um palíndromo.*/

#include <stdio.h>

const int Mil = 1000;
const int Cem = 100;
const int Dez = 10;

void main()
{
    int number;
    printf("Informe um numero inteiro de 1000 a 9999: ");
    scanf("%d", &number);
    int mil = number / Mil;
    int resto = number % Mil;
    int cent = resto / Cem;
    resto = resto % Cem;
    int dez = resto / Dez;
    int uni = resto % Dez;
    int reverso = (uni * Mil) + (dez * Cem) + (cent * Dez) + mil;

    if(reverso == number){
        printf("O numero informado eh um palindromo!");
    }
    else{
        printf("O numero informado nao eh um palindromo!");
    }
    getch();
}
