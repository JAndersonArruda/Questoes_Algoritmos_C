/*73. Escreva um programa que leia três números inteiros distintos e identifique o maior e o
menor número lido.*/

#include <stdio.h>

void main(){
    int num1, num2, num3;
    printf("Informe os 3 numeros inteiros distintos: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    if(num1 > num2 && num1 > num3){
        if(num2 < num3){
            printf("O maior numero eh: %d e o menor numero eh: %d", num1, num2);
        }
        else{
            printf("O maior numero eh: %d e o menor numero eh: %d", num1, num3);
        }
    }
    else if(num2 > num1 && num2 > num3){
        if(num1 < num3){
            printf("O maior numero eh: %d e o menor numero eh: %d", num2 ,num1);
        }
        else{
            printf("O maior numero eh: %d e o menor numero eh: %d", num2 ,num3);
        }
    }
    else{
        if(num1 < num2){
            printf("O maior numero eh: %d e o menor numero eh: %d", num3, num1);
        }
        else{
            printf("O maior numero eh: %d e o menor numero eh: %d", num3, num2);
        }
    }
    getch();
}
