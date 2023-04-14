/*26. Escreva um programa que leia o peso e a altura dos atletas das quatro duplas que vão
participar de um torneio de vólei de praia e calcule o peso e a altura média de cada
dupla e o peso e a altura média de todos os jogadores do torneio.*/

#include <stdio.h>

void main(){
    printf("\n------------------------------------Peso-------------------------------------------\n\n");
    float peso_1, peso_2, peso_3, peso_4, peso_5, peso_6, peso_7, peso_8;
    printf("Informe o peso do primeiro atleta da primeira dupla: ");
    scanf("%f", &peso_1);
    printf("Informe o peso do segundo atleta da primeira dupla: ");
    scanf("%f", &peso_2);
    printf("Informe o peso do primeiro atleta da segunda dupla: ");
    scanf("%f", &peso_3);
    printf("Informe o peso do segundo atleta da segunda dupla: ");
    scanf("%f", &peso_4);
    printf("Informe o peso do primeiro atleta da terceira dupla: ");
    scanf("%f", &peso_5);
    printf("Informe o peso do segundo atleta da terceira dupla: ");
    scanf("%f", &peso_6);
    printf("Informe o peso do primeiro atleta da quarta dupla: ");
    scanf("%f", &peso_7);
    printf("Informe o peso do segundo atleta da quarta dupla: ");
    scanf("%f", &peso_8);
    float peso_dupla_1 = (peso_1 + peso_2) / 2;
    float peso_dupla_2 = (peso_3 + peso_4) / 2;
    float peso_dupla_3 = (peso_5 + peso_6) / 2;
    float peso_dupla_4 = (peso_7 + peso_8) / 2;

    float peso_all = (peso_dupla_1 + peso_dupla_2 + peso_dupla_3 + peso_dupla_4) / 4;

    printf("\n--------------------------------------Altura---------------------------------------\n\n");
    float altura_1, altura_2, altura_3, altura_4, altura_5, altura_6, altura_7, altura_8;
    printf("Informe a altura do primeiro atleta da primeira dupla: ");
    scanf("%f", &altura_1);
    printf("Informe a altura do segundo atleta da primeira dupla: ");
    scanf("%f", &altura_2);
    printf("Informe a altura do primeiro atleta da segunda dupla: ");
    scanf("%f", &altura_3);
    printf("Informe o peso do segundo atleta da segunda dupla: ");
    scanf("%f", &altura_4);
    printf("Informe o peso do primeiro atleta da terceira dupla: ");
    scanf("%f", &altura_5);
    printf("Informe o peso do segundo atleta da terceira dupla: ");
    scanf("%f", &altura_6);
    printf("Informe o peso do primeiro atleta da quarta dupla: ");
    scanf("%f", &altura_7);
    printf("Informe a altura do segundo atleta da quarta dupla: ");
    scanf("%f", &altura_8);
    float altura_dupla_1 = (altura_1 + altura_2) / 2;
    float altura_dupla_2 = (altura_3 + altura_4) / 2;
    float altura_dupla_3 = (altura_5 + altura_6) / 2;
    float altura_dupla_4 = (altura_7 + altura_8) / 2;

    float altura_all = (altura_dupla_1 + altura_dupla_2 + altura_dupla_3 + altura_dupla_4) / 4;

    printf("\n-----------------------------------Resultado Final----------------------------------\n\n");
    printf("\t\t\t\t    Peso    \t    Altura\n\n");
    printf("\tDupla 01 \t|\t  %.2f kg    \t    %.2f m  \n", peso_dupla_1, altura_dupla_1);
    printf("\tDupla 02 \t|\t  %.2f kg    \t    %.2f m  \n", peso_dupla_2, altura_dupla_2);
    printf("\tDupla 03 \t|\t  %.2f kg    \t    %.2f m  \n", peso_dupla_3, altura_dupla_3);
    printf("\tDupla 04 \t|\t  %.2f kg    \t    %.2f m  \n", peso_dupla_4, altura_dupla_4);
    printf("\n\t   Total \t|\t  %.2f kg    \t    %.2f m  \n", peso_all, altura_all);
    getch();
}
