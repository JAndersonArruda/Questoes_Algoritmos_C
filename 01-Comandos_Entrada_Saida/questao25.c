/*25. Escreva um programa que leia um número inteiro N e imprima os 10 primeiros
elementos da sua tabuada. A saída do programa deve seguir o formato abaixo, que
mostra os 5 primeiros elementos da tabuada do 2.

1 X 2 = 2
2 X 2 = 4
3 X 2 = 6
4 X 2 = 8
5 X 2 = 10

*/

#include <stdio.h>

void main(){
    int num;
    printf("Informe um numero inteiro possitvo: ");
    scanf("%d", &num);
    int equacao_1 = num * 1;
    int equacao_2 = num * 2;
    int equacao_3 = num * 3;
    int equacao_4 = num * 4;
    int equacao_5 = num * 5;
    int equacao_6 = num * 6;
    int equacao_7 = num * 7;
    int equacao_8 = num * 8;
    int equacao_9 = num * 9;
    int equacao_10 = num * 10;
    printf("A tabuada do numero %d eh: \n\t\t\t  1 X %d = %d  \n\t\t\t  2 X %d = %d  \n\t\t\t  3 X %d = %d  \n\t\t\t  4 X %d = %d"
           "\n\t\t\t  5 X %d = %d  \n\t\t\t  6 X %d = %d  \n\t\t\t  7 X %d = %d  \n\t\t\t  8 X %d = %d  \n\t\t\t  9 X %d = %d"
           "\n\t\t\t 10 X %d = %d", num, num, equacao_1, num, equacao_2, num, equacao_3, num, equacao_4, num, equacao_5,
           num, equacao_6, num, equacao_7, num, equacao_8, num, equacao_9, num, equacao_10);
    getch();
}
