/*33. Escreva um programa que leia o nome e a quantidade de votos recebidos por cada um
dos três candidatos a prefeito de uma cidade e calcule o percentual de votos recebidos
por cada candidato. Para resolver este programa, considere que não houve votos
brancos e nem nulos.*/

#include <stdio.h>

const int Porcentagem = 100;

int calculoEleicao(char nome1[], char nome2[], char nome3[], int valor1, int valor2, int valor3){
    int total_votos = valor1 + valor2 + valor3;
    float porcentgem1 = (valor1 * Porcentagem) / total_votos;
    float porcentgem2 = (valor2 * Porcentagem) / total_votos;
    float porcentgem3 = (valor3 * Porcentagem) / total_votos;
    printf("\n-----------------------------------Resultado----------------------------------------\n\n");
    printf("\t Candidato \t\t Porcentagem \t\t Votos Apurados \n\n");
    printf("\t %s \t\t    %.2f %% \n", nome1, porcentgem1);
    printf("\t %s \t\t    %.2f %% \n", nome2, porcentgem2);
    printf("\t %s \t\t    %.2f %% \n", nome3, porcentgem3);
    printf("\t\t\t\t\t\t\t    %d \n", total_votos);
}

void main(){
    char nome_candidato1[100];
    char nome_candidato2[100];
    char nome_candidato3[100];
    int votos1, votos2, votos3;
    printf("Informe o nome do primeiro candidato a prefeitura: ");
    scanf("%s", &nome_candidato1);
    printf("Informe a quantidade de votos do respectivo candidato: ");
    scanf("%d", &votos1);
    printf("Informe o nome do segundo candidato a prefeitura: ");
    scanf("%s", &nome_candidato2);
    printf("Informe a quantidade de votos do respectivo candidato: ");
    scanf("%d", &votos2);
    printf("Informe o nome do terceiro candidato a prefeitura: ");
    scanf("%s", &nome_candidato3);
    printf("Informe a quantidade de votos do respectivo candidato: ");
    scanf("%d", &votos3);
    float resultado = calculoEleicao(nome_candidato1, nome_candidato2, nome_candidato3, votos1, votos2, votos3);
    getch();
}
