/*15. Escreva um programa que leia uma palavra e um n�mero inteiro k e identifique a k-�sima
letra da palavra informada pelo usu�rio.*/

#include <stdio.h>

//fun��o para paercorer a palavra
int len(char conjunto[], int indicador){    //variavel string a ser percorrida e valor a ser identificado
    int possicao = 0;
    //percorre o conjunto que ser� a palavra, at� chagar no indicar informado pelo usus�rio
    while(conjunto[possicao] != conjunto[indicador-1]){ //possicao = caractere, indicador = posi��o da letra esperada
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
    printf("A %d� letra eh: %s", indicador_letra, letra);
    getch();
}
