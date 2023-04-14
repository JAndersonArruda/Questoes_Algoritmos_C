/*6. Escreva um programa que leia um número inteiro e informe o seu antecessor e o seu
sucessor.*/

#include <stdio.h>

void main(){
    int num;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    int antecessor = num - 1;
    int sucessor = num + 1;
    printf("Resultado: \nAntecessor: %d \nSucessor: %d", antecessor, sucessor);
    getch();
}
