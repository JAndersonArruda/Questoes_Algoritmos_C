/*64. Escreva um programa que leia um número inteiro e verifique se ele é positivo,
negativo ou neutro.*/

#include <stdio.h>

void main(){
    int numero;
    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);
    if(numero > 0){
        printf("O numero %d eh um numero positivo!", numero);
    }else if(numero < 0){
        printf("O numero %d eh um numero negativo!", numero);
    }else{
        printf("O numero %d eh um numero nulo!", numero);
    }
    getch();
}
