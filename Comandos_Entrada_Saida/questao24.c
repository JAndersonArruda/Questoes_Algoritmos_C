/*24. Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e
imprima os 5 primeiros termos desta progressão.*/

#include <stdio.h>

void main(){
    int inicializador, razao;
    printf("Informe o numero inical da progressao aritimetica: ");
    scanf("%d", &inicializador);
    printf("Informe a razão da progressao aritimetica: ");
    scanf("%d", &razao);
    int termo_1 = inicializador;
    int termo_2 = termo_1 + razao;
    int termo_3 = termo_2 + razao;
    int termo_4 = termo_3 + razao;
    int termo_5 = termo_4 + razao;
    printf("os cinco primeiros elementos da progressao aritimetica correspondem a: %d, %d, %d, %d, %d ...",
           termo_1, termo_2, termo_3, termo_4, termo_5);
    getch();
}
