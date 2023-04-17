/*71. Escreva um programa que leia três números inteiros distintos e identifique o maior
número lido.*/

#include <stdio.h>

void main(){
    int num1, num2, num3;
    printf("Informe respectivamente os valores dos lados 1, 2 e 3 do triangulo: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    if(num1 > num2 && num1 > num3){
        printf("O maior numero eh: %d", num1);
    }
    else if(num1 < num2 && num2 > num3){
        printf("O maior numero eh: %d", num2);
    }
    else if(num1 < num3 && num3 > num2){
        printf("O maior numero eh: %d", num3);
    }


    else if(num1 == num2 && num1 > num3){
        printf("Os maiores numeros sao os de valor: %d", num1);
    }
    else if(num2 == num3 && num1 < num3){
        printf("Os maiores numeros sao os de valor: %d", num2);
    }
    else{
        printf("Os maiores numeros sao os de valor: %d", num1);
    }

    getch();
}
