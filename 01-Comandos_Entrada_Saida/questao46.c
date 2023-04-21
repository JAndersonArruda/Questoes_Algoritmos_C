/*46. Escreva um programa que leia um número inteiro entre 0 e 999 e calcule o seu
reverso. Você deve sempre considerar que o número lido tem três algarismos. Desta
forma, o reverso de 195 deve ser 591, o de 768 deve ser 867, de 3 deve ser 300, o de
40 deve ser 40, o de 500 deve ser 5, e assim sucessivamente. O programa deve
armazenar o valor do reverso em uma variável antes de exibi-lo para o usuário.*/

#include <stdio.h>

const int IndiceCentena = 100;
const int IndiceDezena = 10;

void main(){
    int numero;
    printf("Informe um numero inteiro entre 0 e 999: ");
    scanf("%d", &numero);
    int algarismo1 = numero / IndiceCentena;
    int resto = numero % IndiceCentena;
    int algarismo2 = resto / IndiceDezena;
    int algarismo3 = resto % IndiceDezena;
    int reverso = (algarismo3*IndiceCentena) + (algarismo2*IndiceDezena) + algarismo1;
    printf("O reverso do numero %d eh %d \n", nunmero, reverso);
    getch();
}
