/*14. Escreva um programa que leia uma palavra e calcule o seu comprimento*/

#include <stdio.h>

void main(){
    char palavra[100];
    printf("Informe uma palavra qualquer: ");
    scanf("%s", &palavra);

    int a = 0;
    while(palavra[a] != '\0'){
        if(palavra[a] == '\n')
            palavra[a] == '\0';
        a ++;
    }
    printf("O tamanho da palavra: %s eh: %d", palavra, a);
    getch();
}
