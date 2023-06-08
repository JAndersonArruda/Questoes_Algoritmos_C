/*163. O IFPB precisa de um programa que faça a correção automática das provas do seu
teste de seleção. A prova, que é a mesma para todos os alunos, consiste de dez
questões objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa deve ler o
gabarito da prova e, a seguir, o nome de um candidato e as opções que aparecem no
seu cartão de respostas. Para cada candidato, o programa deve imprimir o seu
percentual de acertos. O processamento deve ser encerrado quando for encontrado
um candidato com o nome ´fim’, que não deve ser processado. O programa deve
imprimir também a pontuação média dos candidatos.*/

#include <stdio.h>
#include <stdlib.h>

const int Questoes = 10;

void main()
{
    char vetGabarito[Questoes];
    int numQuestao = 1;
    int a;
    printf("Informe o gabarito das questoes.\n\n");
    for (a = 0; a < Questoes; a ++)
    {
        fflush(stdin);
        printf("Questao %d. Alternativa correta (a, b, c, d ou e): ", numQuestao);
        scanf("%c", &vetGabarito[a]);
        numQuestao ++;
    }

}