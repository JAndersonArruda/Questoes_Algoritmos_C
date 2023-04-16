/*58. Escreva um programa que leia um número inteiro e verifique se ele é par ou ímpar*/

#include <stdio.h>

void main(){
    int numero;
    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);
    int classificacao = numero % 2;
    if(classificacao == 0){
        printf("O numero %d eh par!", numero);
    }else{
        printf("O numero %d eh impar!", numero);
    }
    getch();
}
