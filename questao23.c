/*23. Escreva um programa que leia o valor do raio de uma esfera e determine o seu
volume.*/

#include <stdio.h>
#include <math.h>

const float PI = M_PI;

int esferaVolume(float valor1){
    float volume_esfera = (4/3) * PI * pow(valor1, 3);
    return volume_esfera;
}

void main(){
    float raio;
    printf("Informe o valor do raio da esfera: ");
    scanf("%f", &raio);
    float volume = esferaVolume(raio);
    printf("O volume da esfera cujo raio corresponde a %.2f eh: %.2f", raio, volume);
    getch();
}
