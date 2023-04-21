/*85. Escreva um programa que leia dois operandos inteiros e um operador (+, -, *, /) e
aplique o operador lido aos dois operandos, na ordem em que os mesmos foram
digitados.*/

#include <stdio.h>

void main(){
    int numero1, numero2;
    char operador[1];

    printf("Informe o primeiro numeros inteiro: ");
    scanf("%d", &numero1);

    printf("Informe o segundo numeros inteiro: ");
    scanf("%d", &numero2);

    printf("Informe um operador: ");
    scanf("%s", operador);

    if(operador[0] == '\+'){
        printf("%d",numero2);
        int equacao = numero1 + numero2;
        printf("De acordo com as informações a equacao eh: %d + %d = %d", numero1, numero2, equacao);
    }
    else if(operador[0] == '\-'){
        int equacao = numero1 - numero2;
        printf("De acordo com as informacoes a equacao eh: %d - %d = %d", numero1, numero2, equacao);
    }
    else if(operador[0] == '\*'){
        int equacao = numero1 * numero2;
        printf("De acordo com as informacoes a equacao eh: %d * %d = %d", numero1, numero2, equacao);
    }
    else if(operador[0] == '\/'){
        float equacao = numero1 / numero2;
        printf("De acordo com as informacoes a equacao eh: %d / %d = %.1f", numero1, numero2, equacao);
    }
    else{
        printf("Informe operadores validos: (+, -, * e /)");
    }
    getch();
}
