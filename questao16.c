/*16. Escreva um programa que leia uma letra minúscula e imprima a sua letra maiúscula
correspondente.*/

#include <stdio.h>
#include <ctype.h>

void main(){
    char letra;
    printf("Informe uma letra de preferencia minuscula: ");
    scanf("%c", &letra);
    printf("A letra %c minuscula, corresponde em maiuscula a: %c", letra, toupper(letra));
    getch();
}
