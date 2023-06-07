/*206. Escreva um programa que leia o valor dos dois catetos de um triângulo retângulo e
calcule o valor da hipotenusa. O cálculo deve ser realizado através de um
subprograma.*/

#include <stdio.h>
#include <math.h>

float calculoHipotenusa(float cateto1, float cateto2)
{
    return sqrt((pow(cateto1, 2) + pow(cateto2, 2)));
}

void main()
{
    float cateto1, cateto2;
    printf("Inoforme o valor do primeiro cateto do tringulo: ");
    scanf("%f", &cateto1);
    printf("Inoforme o valor do segundo cateto do tringulo: ");
    scanf("%f", &cateto2);
    printf("A hipotenus a do tringulo eh: %.2f", calculoHipotenusa(cateto1, cateto2));
    getch();
}