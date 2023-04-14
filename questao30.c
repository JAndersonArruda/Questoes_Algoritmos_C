/*30. Escreva um programa que leia os valores das coordenadas X e Y e dois pontos P e Q e
determine a distância entre estes dois pontos. A distância entre dois pontos pode ser
determinada através da distância euclidiana.
distancia = raiz_quadrada[(x1 − x2 )²+ (y1 − y2 )²]*/

#include <stdio.h>
#include <math.h>

int coordenadasPonto(float valor_x1, float valor_y1, float valor_x2, float valor_y2){
    float distancia_euclidiana = sqrt(pow((valor_x1 - valor_x2), 2) + pow((valor_y1 - valor_y2), 2));
    return distancia_euclidiana;
}

void main(){
    float cord_x1, cord_y1, cord_x2, cord_y2;
    printf("Informe as coodenadas x e y do primeiro ponto: ");
    scanf("%f%f", &cord_x1, &cord_y1);
    printf("Informe as coodenadas x e y do sengundo ponto: ");
    scanf("%f%f", &cord_x2, &cord_y2);
    float distancia_ponto = coordenadasPonto(cord_x1, cord_y1, cord_x2, cord_y2);
    printf("A distancia entre os dois pontos cuja coordenadas foram informadas eh: %.2f", distancia_ponto);
    getch();
}
