/*36. Escreva um programa que leia dois n�meros inteiros e os armazene em duas vari�veis
a e b. Ap�s a leitura, o programa deve permutar os valores armazenados nas duas
vari�veis. O programa deve imprimir os valores das duas vari�veis antes e ap�s a
permuta��o.*/

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
