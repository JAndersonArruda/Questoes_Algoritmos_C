/*81. Escreva um programa que leia os valores das coordenadas x e y do centro de uma
circunferência e o valor do seu raio e, a seguir, leia as coordenadas x e y de um ponto e
verifique se este ponto está localizado dentro da circunferência.

distancia = raiz_quadrada[(x1 − x2 )²+ (y1 − y2 )²]*/

#include <stdio.h>
#include <math.h>

const float OrigenX = 0;
const float OrigenY = 0;

int coordenadasPonto(float valor_x, float valor_y){
    float distancia_euclidiana = sqrt(pow((valor_x - OrigenX), 2) + pow((valor_y - OrigenY), 2));
    return distancia_euclidiana;
}

void main(){
    float cord_x, cord_y, raio;
    printf("Informe as coodenadas x e y do ponto P: ");
    scanf("%f%f", &cord_x, &cord_y);
    printf("Informe o valor do raio da circunferencia: ");
    scanf("%f", &raio);
    float distancia_ponto = coordenadasPonto(cord_x,cord_y);
    if(distancia_ponto < raio){
        printf("O ponto P esta dentro da circunferencia!");
    }
    else if(distancia_ponto > raio){
        printf("O Ponto P esta fora da circunferencia!");
    }
    else{
        printf("O ponto P esta na superficie da circunferencia!");
    }
    getch();
}
