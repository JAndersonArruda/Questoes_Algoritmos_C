/*5. Escreva um programa que leia o valor do raio de uma circunferência e calcule a sua
área e o seu comprimento.*/

#include <stdio.h>
#include <math.h>

const float PI = M_PI;
void main(){
    float raio;
    printf("Informe o valor do raio: ");
    scanf("%f", &raio);
    float area = PI * (raio * raio);
    float comprimento = 2 * PI * raio;
    printf("Resultado: \nArea: %.2f \nComprimento: %.2f", area, comprimento);
    getch();
}
