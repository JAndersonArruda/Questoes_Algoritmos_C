/*76. Escreva um programa que leia as coordenadas x e y de um ponto e verifique a qual
quadrante este ponto pertence. Você pode supor que o ponto digitado pelo usuário
pertence a apenas um quadrante.*/

#include <stdio.h>

void main(){
    float cord_x, cord_y;
    printf("Informe as coordenadas x e y do ponto qualquer: ");
    scanf("%f%f", &cord_x, &cord_y);
    if(cord_x > 0 && cord_y > 0){
        printf("O ponto pertence ao primeiro quadrante.");
    }
    else if(cord_x > 0 && cord_y < 0){
        printf("O ponto pertence ao quarto quadrante.");
    }
    else if(cord_x < 0 && cord_y > 0){
        printf("O ponto pertence ao segundo quadrante.");
    }
    else{
        printf("O ponto pertence ao terceiro quadrante");
    }
    getch();
}
