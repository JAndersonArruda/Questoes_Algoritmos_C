/*15. Escreva um programa que leia uma palavra e um número inteiro k e identifique a k-ésima
letra da palavra informada pelo usuário.*/

#include <stdio.h>

//função para paercorer a palavra
int len(char conjunto[], int indicador){    //variavel string a ser percorrida e valor a ser identificado
    int possicao = 0;
    //percorre o conjunto que será a palavra, até chagar no indicar informado pelo ususário
    while(conjunto[possicao] != conjunto[indicador-1]){ //possicao = caractere, indicador = posição da letra esperada
        possicao ++;
    }
    return conjunto[possicao]; //retorna a letra onde parou a contagem do while
}

void main(){
    char palavra[100] = {};
    int indicador_letra;
    printf("Informe uma palavra qualquer: ");
    scanf("%s", &palavra);
    printf("Informe um numero inteiro possitivo qualquer: ");
    scanf("%d", &indicador_letra);

    char letra[30] = {len(palavra, indicador_letra)};
    printf("A %d° letra eh: %s", indicador_letra, letra);
    getch();
}
