/*16. Escreva um programa que leia uma letra min�scula e imprima a sua letra mai�scula
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
