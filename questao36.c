/*36. Escreva um programa que leia dois números inteiros e os armazene em duas variáveis
a e b. Após a leitura, o programa deve permutar os valores armazenados nas duas
variáveis. O programa deve imprimir os valores das duas variáveis antes e após a
permutação.*/

#include <stdio.h>

void main(){
    int num1, num2;
    printf("Informe um numero a: ");
    scanf("%d", &num1);
    printf("Informe um numero b: ");
    scanf("%d", &num2);
    printf("Os numeros a e b sao respctivamente: %d e %d\n", num1, num2);
    int num3 = num2;
    int num4 = num1;
    printf("Apos a permuta os numeros a e b sao respectivamente: %d e %d", num3, num4);
    getch();
}
