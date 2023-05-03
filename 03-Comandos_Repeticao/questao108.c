/*108. Escreva um programa que leia 20 números entre 10000 e 99999 referente aos
números dos deputados estaduais eleitos e identifique a quantidade de candidatos
que cada partido elegeu. O número do partido do deputado pode ser identificado
pelos dois primeiros algarismos do número do candidato. Por exemplo, um candidato
com número 13457 concorre pelo PT, que é o partido de número 13, enquanto que um
candidato com número 45879 concorre pelo PSDB, que é o partido de número 45.
Neste programa, considere os seguintes números de partido: 13 (PT), 14 (PTB), 15
(PMDB), 25 (DEM), 45 (PSDB) e 65( PCdoB).*/

#include <stdio.h>
#include <stdlib.h>

const int Unidade = 1000;
const int Quantidade = 20;

void main()
{
    int contPT = 0;
    int contPTB = 0;
    int contPMDB = 0;
    int contDEM = 0;
    int contPSDB = 0;
    int contPCdoB = 0;
    int i;
    for(i = 1; i <= Quantidade; i ++)
    {
        int number;
        printf("Informe o numero do deputado eleito: ");
        scanf("%d", &number);

        if(number / Unidade == 13)
        {
            contPT ++;
        }
        else if(number / Unidade == 14)
        {
            contPTB ++;
        }
        else if(number / Unidade == 15)
        {
            contPMDB ++;
        }
        else if(number / Unidade == 25)
        {
            contDEM ++;
        }
        else if(number / Unidade == 45)
        {
            contPSDB ++;
        }
        else if(number / Unidade == 65)
        {
            contPCdoB ++;
        }
    }
    printf("\n  PT ----------- %02d", contPT);
    printf("\n  PTB ---------- %02d", contPTB);
    printf("\n  PMDB --------- %02d", contPMDB);
    printf("\n  DEM ---------- %02d", contDEM);
    printf("\n  PSDB --------- %02d", contPSDB);
    printf("\n  PCdoB -------- %02d", contPCdoB);
    getch();
}
