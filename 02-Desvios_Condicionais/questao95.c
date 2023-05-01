/*95. Escreva um programa que leia quatro números reais e verifique se eles formam, na
ordem em que foram digitados, uma progressão aritmética, uma progressão
geométrica, os dois tipos de progressão ou nenhum tipo de progressão.*/

#include <stdio.h>

void main()
{
    float number1, number2, number3, number4;
    printf("Informe quatro numeros reais: ");
    scanf("%f%f%f%f", &number1, &number2, &number3, &number4);
    float indice = number2 - number1;
    float poten = number2 / number1;
    if(number1 + indice == number2 && number2 + indice == number3 && number3 + indice == number4){
        if(number1 * poten == number2 && number2 * poten == number3 && number3 * poten == number4){
            printf("Os numeros informados fazem parte de um progressao aritmetica e de uma progessao geometrica");
        }
        else{
            printf("Os numeros informados fazem parte de um progressao aritmetica.");
        }
    }
    else if(number1 * poten == number2 && number2 * poten == number3 && number3 * poten == number4){
        printf("Os numero informados fazem parte de uma progessao geometrica.");
    }
    else{
        printf("Os numeros nao fazem parte de nenhum dos tipos de progressoes");
    }
    getch();
}
