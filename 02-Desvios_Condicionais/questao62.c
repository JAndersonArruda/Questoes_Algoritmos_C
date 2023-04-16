/*62. Escreva um programa que leia dois números inteiros M e N e verifique se N é múltiplo
de M.*/

#include <stdio.h>

void main(){
    int numero1, numero2;
    printf("Informe o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Informe o segundo numero: ");
    scanf("%d", &numero2);
    int resto = numero2 % numero1;
    if(resto == 0){
        printf("O numero %d eh multiplo de %d", numero2, numero1);
    }else{
        printf("O numero %d nao eh multiplo de %d", numero2, numero1);
    }
    getch();
}
