/*29. Escreva um programa que leia o número total de questões existentes em uma prova e
o número de questões que um candidato acertou e determine o seu percentual de
acertos e o seu percentual de erros.*/

#include <stdio.h>

const int Porcentagem = 100;

void main(){
    int quantidade_questaoes, acertos;
    printf("Informe o numero total de quaestoes: ");
    scanf("%d", &quantidade_questaoes);
    printf("Informe a quantidade de questoes que o candidato respondeu corretamente: ");
    scanf("%d", &acertos);
    float percentual_acertos = (acertos * Porcentagem) / quantidade_questaoes;
    float percentual_erros = (percentual_acertos - Porcentagem) * -1;
    printf("Sua pontuacao na prova eh\n\n\t Acertos \t Erros \n\n\t\ %.2f%% \t %.2f%%",
           percentual_acertos, percentual_erros);
    getch();
}
