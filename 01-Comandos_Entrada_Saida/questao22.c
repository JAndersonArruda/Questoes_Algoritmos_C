/*22. Escreva um programa que leia dois números inteiros a e b e determine o maior
múltiplo de a que é menor ou igual a b. Por exemplo, o maior múltiplo de 3 menor ou
igual a 50 é 48.*/

#include <stdio.h>

void main(){
    int num_1, num_2;
    printf("Informe o valor do primeiro numero: ");
    scanf("%d", &num_1);
    printf("Informe o valor do segundo numero: ");
    scanf("%d", &num_2);
    int multiplo = (num_2 / num_1) * num_1;
    printf("O maior multiplo de %d, menor ou igual a %d eh: %d", num_1, num_2, multiplo);
    getch();
}
