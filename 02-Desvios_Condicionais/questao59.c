/*59. Escreva um programa que leia dois n�meros e determine se o segundo n�mero �
menor, igual ou maior que o primeiro.*/

#include <stdio.h>

void main(){
    int numero1, numero2;
    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &numero1);
    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &numero2);

    if(numero2 < numero1){
        printf("O numero %d eh menor que o numero %d", numero2, numero1);
    }else if(numero2 == numero1){
        printf("O numero %d eh igual ao numero %d", numero2, numero1);
    }else{
        printf("O numero %d eh maior que o numero %d", numero2, numero1)
    }
    getch();
}
