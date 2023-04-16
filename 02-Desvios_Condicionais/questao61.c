/*61. Escreva um programa que leia um número inteiro e determine o seu valor absoluto. O
valor absoluto deve ser calculado sem o uso de qualquer função oferecida pela
linguagem.*/

#include <stdio.h>

void main(){
    int numero;
    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);
    int absoluto;
    if(numero < 0){
        absoluto = numero * -1;
    }else{
        absoluto = numero;
    }
    printf("O valor absoluto do numero %d eh: %d", numero, absoluto);
    getch();
}
