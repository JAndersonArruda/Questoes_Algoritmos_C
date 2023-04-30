/*87. Escreva um programa que leia um caractere correspondente ao estado civil de uma
pessoa e imprima o estado civil informado por extenso. As opções para o estado civil
são: S (solteiro), C (casado), D (divorciado) e V (viúvo).*/

#include <stdio.h>

void main(){
    char caracter;
    printf("Informe seu estado civil, S(solteiro), C casado), D(divorciado) e V(viuvo): ");
    caracter = getchar();
    if(caracter == '\S' || caracter == '\s'){
        printf("Seu estado civil e Solteiro!");
    }
    else if(caracter == '\C' || caracter == '\c'){
        printf("Seu estado civil e Casado!");
    }
    else if(caracter == '\D' || caracter == '\d'){
        printf("Seu estado civil e Divorciado!");
    }
    else{
        printf("Seu estado civil e Viuvo");
    }
    getch();
}
