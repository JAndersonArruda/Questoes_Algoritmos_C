/*70. Escreva um programa que leia os valores dos tr�s lados de um tri�ngulo e o classifique
como equil�tero, is�sceles ou escaleno.*/

#include <stdio.h>

void main(){
    float lado1, lado2, lado3;
    printf("Informe respectivamente os valores dos lados 1, 2 e 3 do triangulo: ");
    scanf("%f%f%f", &lado1, &lado2, &lado3);
    if(lado1 == lado2 && lado2 == lado3){
        printf("O triangulo cujo os lados informado eh equilatero!");
    }
    else if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3){
        printf("O triangulo cujo os lados informado eh isosceles!");
    }
    else{
        printf("O triangulo cujo os lados informado eh escaleno!");
    }
    getch();
}
