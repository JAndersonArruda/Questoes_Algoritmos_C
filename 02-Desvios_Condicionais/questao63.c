/*63. Escreva um programa que leia o número de gols marcados pelo time da casa e o
número de gols marcado pelo time visitante e verifique se o jogo foi vencido pelo time
da casa, pelo time visitante ou se terminou empatado.*/

#include <stdio.h>

void main(){
    int numGols, numVisitante;
    printf("Informe o numero de gols do time da casa: ");
    scanf("%d", &numGols);
    printf("Informe o numero de gols do  time visitante: ");
    scanf("%d", &numVisitante);
    if(numGols > numVisitante){
        printf("O time da casa venceu por %d x %d", numGols, numVisitante);
    }else if(numGols < numVisitante){
        printf("O time visitante venceu por %d x %d", numVisitante, numGols);
    }else{
        printf("O jogo foi encerrado em empate, com placar de: %d x %d", numVisitante, numGols);
    }
    getch();
}
