/*22. Escreva um programa que leia dois números inteiros a e b e determine o maior
múltiplo de a que é menor ou igual a b. Por exemplo, o maior múltiplo de 3 menor ou
igual a 50 é 48.*/

#include <stdio.h>

int multiploCodicional(int valor1, int valor2){
    int cont = 0;
    while((valor1 * cont) != valor2){ //finalizar esse metodo tem ser <= com for
        cont ++;
    }
    return valor1;
}

void main(){
    int num1, num2;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num1);
    printf("Informe um segundo numero inteiro: ");
    scanf("%d", &num2);
    int maior_multiplo = multiploCodicional(num1, num2);
    printf("O maior multiplo de %d que eh menor ou igual a %d eh: %d", num1, num2, maior_multiplo);
    getch();
}
