/*75. Escreva um programa que leia os valores dos três ângulos internos de um triângulo e
verifique se o mesmo é um triângulo retângulo.*/

#include <stdio.h>

void main(){
    float angulo1, angulo2, angulo3;
    printf("Informe os tres angulos internos do trinagulo: ");
    scanf("%f%f%f", &angulo1, &angulo2, &angulo3);
    if(angulo1 == 90 || angulo2 == 90 || angulo3 == 90){
        printf("O trinagulo cuja os angulos informados correspondem a: %.2f; %.2f e %.2f eh um triangulo retangulo",
                angulo1, angulo2, angulo3);
    }
    else{
        printf("O trinagulo nao eh um triangulo retangulo");
    }
    getch();
}
