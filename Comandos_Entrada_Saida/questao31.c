/*31. Em um determinado concurso público, para cada questão que um candidato acerta ele
ganha 5 pontos, para cada questão que ele erra ele perde 3 pontos e para cada
questão que ele deixa em branco ele não ganha e nem perde pontos. Escreva um
programa que leia o número de questões que um candidato acertou, o número de
questões que ele errou e o número de questões que ele deixou em branco e
determine a sua pontuação final*/

#include <stdio.h>

int pontosQuestoes(int acertos, int erros, int nulos){
    int correct = acertos * 5;
    int incorrect = erros * 3;
    int null = nulos * 0;
    int final_pontos = correct - incorrect + null;
    return final_pontos;
}

void main(){
    int quantidade_acertos, quantidade_erros, quantidade_nulos;
    printf("Informe a quantidade de questoes acertadas: ");
    scanf("%d", &quantidade_acertos);
    printf("Informe a quantidade de questoes erradas: ");
    scanf("%d", &quantidade_erros);
    printf("Informe a quantidade de questoes nulas: ");
    scanf("%d", &quantidade_nulos);
    int pontuacao_final = pontosQuestoes(quantidade_acertos, quantidade_erros, quantidade_nulos);
    printf("Sua pontuacao final eh: %d", pontuacao_final);
    getch();
}
