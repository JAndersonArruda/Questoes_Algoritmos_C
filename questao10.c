/*10. Escreva um programa que leia o valor dos dois catetos de um triângulo retângulo e
calcule o valor da hipotenusa.*/

#include <stdio.h>
#include <math.h>

void main(){
    float cateto1, cateto2;
    printf("Informe o valor do primeiro cateto: ");
    scanf("%f", &cateto1);
    printf("Informe o valor do segundo cateto: ");
    scanf("%f", &cateto2);
    float hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    printf("Resultado: \nHipotenusa: %.2f", hipotenusa);
    getch();
}
