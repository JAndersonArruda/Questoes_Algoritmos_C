/*91. Escreva um programa que leia o valor de um mês e de um ano e verifique a
quantidade de dias do mês informado pelo usuário.*/

#include <stdio.h>

void main()
{
    int mes, ano;
    printf("Informe o valor do mes e do ano respectivamente: ");
    scanf("%d%d", &mes, &ano);

    switch(mes){
        case 1:
            printf("O mes de Janeiro possui 31 dias.\n");
            break;
        case 2:
            if(ano%400 == 0 || ano%4 == 0 && ano%100 != 0){
                printf("O mes de Fevereiro possui 29 dias.\n");
            }
            else{
                printf("O mes de Fevereiro possui 28 dias.\n");
            }
            break;
        case 3:
            printf("O mes de Marco possui 31 dias.\n");
            break;
        case 4:
            printf("O mes de Abril possui 30 dias.\n");
            break;
        case 5:
            printf("O mes de Maio possui 31 dias.\n");
            break;
        case 6:
            printf("O mes de Junho possui 30 dias.\n");
            break;
        case 7:
            printf("O mes de Julho possui 31 dias.\n");
            break;
        case 8:
            printf("O mes de Agosto possui 31 dias.\n");
            break;
        case 9:
            printf("O mes de Setembro possui 30 dias.\n");
            break;
        case 10:
            printf("O mes de Outubro possui 31 dias.\n");
            break;
        case 11:
            printf("O mes de Novembro possui 30 dias.\n");
            break;
        case 12:
            printf("O mes de Dezembro possui 31 dias.\n");
            break;
        default:
            printf("Informe um valor de mes ou ano validos!");
    }
    getch();
}
