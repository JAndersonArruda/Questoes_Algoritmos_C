/*83. Escreva um programa que leia um número inteiro entre 1 e 10 e imprima o número
lido por extenso.*/

#include <stdio.h>

void main(){
    int numero;
    printf("Informe um numero inteiro entre 1 e 10: ");
    scanf("%d", &numero);
    if(numero == 1){
        printf("O numero informado eh o UM!");
    }
    else if(numero == 2){
        printf("O numero informado eh o DOIS!");
    }
    else if(numero == 3){
        printf("O numero informado eh o TRES!");
    }
    else if(numero == 4){
        printf("O numero informado eh o QUATRO!");
    }
    else if(numero == 5){
        printf("O numero informado eh o CINCO!");
    }
    else if(numero == 6){
        printf("O nuemro informado eh o SEIS!");
    }
    else if(numero == 7){
        printf("O numero informado eh o SETE!");
    }
    else if(numero == 8){
        printf("O numero informado eh o OITO!");
    }
    else if(numero == 9){
        printf("O numero informado eh o NOVE!");
    }
    else if(numero == 10){
        printf("O numero informado eh o DEZ!");
    }
    else{
        printf("O numero informado nao faz parte de entervalo, 1 a 10, informe valores validos.");
    }
    getch();
}
