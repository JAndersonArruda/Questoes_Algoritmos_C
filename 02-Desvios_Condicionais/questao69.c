/*69. Escreva um programa que leia as coordenadas x e y de um ponto e verifique a
quantidade de quadrantes a que este ponto pertence.*/

#include <stdio.h>

void main(){
    float cord_x, cord_y;
    printf("Informe respectivamente as cordenadas x e y de um ponto: ");
    scanf("%f%f", &cord_x, &cord_y);
    if(cord_x > 0 && cord_y > 0){
        printf("O ponto informado pode ser encontrado apenas no quadrante 1");
    }
    else if(cord_x < 0 && cord_y > 0){
        printf("O ponto informado pode ser encontrado apenas no quadrante 2");
    }
    else if(cord_x < 0 && cord_y < 0){
        printf("O ponto informado pode ser encontrado apenas no quadrante 3");
    }
    else if(cord_x > 0 && cord_y < 0){
        printf("O ponto informado pode ser encontrado apenas no quadrante 4");
    }

    else if(cord_x == 0 && cord_y > 0 ){
        printf("O ponto informado pertence aos quadrante 1 e 2");
    }
    else if(cord_x < 0 && cord_y == 0){
        printf("O ponto informado pertence aos quadrante 2 e 3");
    }
    else if(cord_x == 0 && cord_y < 0){
        printf("O ponto informado pertence aos quadrante 3 e 4");
    }
    else if(cord_x > 0 && cord_y == 0){
        printf("O ponto informado pertence aos quadrante 1 e 4");
    }
    else{
        printf("O ponto informado pertence a todos os quadrantes");
    }
    getch();
}
