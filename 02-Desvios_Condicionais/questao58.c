/*58. Escreva um programa que leia um n�mero inteiro e verifique se ele � par ou �mpar*/

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
