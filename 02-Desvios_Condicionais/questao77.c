/*77. Escreva um programa que leia as coordenadas x e y de um ponto e verifique se este
ponto pertence à reta y = 2x +1.*/

#include <stdio.h>

void main(){
    float cord_x, cord_y;
    printf("Informe as coordenadas x e y do ponto qualquer: ");
    scanf("%f%f", &cord_x, &cord_y);
    if(cord_y == (2 * cord_x) + 1){
        printf("O ponto pertence a reta y = 2x + 1.");
    }
    else{
        printf("O ponto nao pertence a reta y = 2x + 1.");
    }
    getch();
}
