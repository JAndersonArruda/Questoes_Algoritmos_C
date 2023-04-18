/*74. Escreva um programa que leia três números distintos e identifique o número que não
é nem o menor e nem o maior número.*/

#include <stdio.h>

void main(){
    int num1, num2, num3;
    printf("Informe os 3 numeros inteiros distintos: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    if(num1 < num2 && num2 < num3){
        printf("O numero medio eh: %d", num2);
    }
    else if(num2 < num1 && num1 < num3){
        printf("O numero medio eh: %d", num1);
    }
    else{
        printf("O numero medio eh: %d", num3);
    }
    getch();
}
