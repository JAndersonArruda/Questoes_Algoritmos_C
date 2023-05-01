/*86. Escreva um programa que leia um caractere e verifique se o mesmo é uma letra
maiúscula, uma letra minúscula, um numeral ou nenhum dos tipos anteriores.*/

#include <stdio.h>

void main(){
    char caracter;
    printf("Informe o um caractere qualquer: ");
    caracter = getchar();
    fflush(stdin);

    printf("%c\n", caracter);
    if(caracter >= '0' && caracter <= '9'){
        printf("O caractere informado eh um numero!");
    }
    else if(caracter >= 'a' && caracter <= 'z'){
        printf("O caractere informado eh uma letra minuscula!");
    }
    else if(caracter >= 'A' && caracter <= 'Z'){
        printf("O caractere informado eh uma letra maiuscula!");
    }
    else{
        printf("O caractere informado nao nenhuma letra e nem um numero!");
    }
    getch();
}
