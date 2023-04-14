/*39. Escreva um programa que leia o tamanho de um arquivo em MB e a taxa de
transmissão da rede em KB/s e calcule o tempo aproximado necessário para a
transmissão do arquivo. A resposta deve ser dada através de uma mensagem na forma
X horas, Y minutos e Z segundos*/

#include <stdio.h>

const int MB_KB = 1024;
const int Hora_Segundos = 3600;
const int Hora_Minutos = 60;

void main(){
    int tamanho, taxa_transmissao;
    printf("Informe o tamanho do arquivo em MB: ");
    scanf("%d", &tamanho);
    printf("Informe a txa de transmissao do arquivo em KB/s: ");
    scanf("%d", &taxa_transmissao);

    int conversao = tamanho * MB_KB;
    int transicao_tempo = conversao / taxa_transmissao;

    int horas = transicao_tempo / Hora_Segundos;
    int resto_minutos = transicao_tempo % Hora_Segundos;
    int minutos = resto_minutos / Hora_Minutos;
    int segundos_final = resto_minutos % Hora_Minutos;

    printf("O tempo estimado para o download do arquivo eh: %d h, %d min e %d seg\n", horas, minutos, segundos_final);
    getch();
}
