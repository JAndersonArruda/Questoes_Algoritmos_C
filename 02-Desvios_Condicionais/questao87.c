/*87. Escreva um programa que leia um caractere correspondente ao estado civil de uma
pessoa e imprima o estado civil informado por extenso. As op��es para o estado civil
s�o: S (solteiro), C (casado), D (divorciado) e V (vi�vo).*/

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
