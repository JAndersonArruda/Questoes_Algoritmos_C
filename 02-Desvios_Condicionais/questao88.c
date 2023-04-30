/*88. Escreva um programa que leia um �nico n�mero entre 10000 e 99999 referente ao
n�mero de um deputado estadual e identifique o partido pelo qual ele est�
concorrendo. O n�mero do partido pode ser identificado pelos dois primeiros
algarismos do n�mero do candidato. Por exemplo, um candidato com n�mero 13457
concorre pelo PT, que � o partido de n�mero 13, enquanto que um candidato com
n�mero 45879 concorre pelo PSDB, que � o partido de n�mero 45. Neste programa,
considere os seguintes n�meros de partido: 13 (PT), 14 (PTB), 15 (PMDB), 25 (DEM), 45
(PSDB) e 65( PCdoB).*/

#include <stdio.h>

const int Indice1 = 10000;
const int Indice2 = 1000;

void main(){
    int number;
    printf("Informe o numero do candidato: ");
    scanf("%d", &number);
    int inicial1, inicial2, inicialFinal;
    inicial1 = number / Indice1;
    inicial2 = (number % Indice1) / Indice2;
    inicialFinal = (inicial1 * 10) + inicial2;
    if(inicialFinal == 13){
        printf("O partido de seu candidato eh o PT!");
    }
    else if(inicialFinal == 14){
        printf("O partido de seu candidato eh o PTB!");
    }
    else if(inicialFinal == 15){
        printf("O partido de seu candidato eh o PMDB!");
    }
    else if(inicialFinal == 25){
        printf("O partido de seu candidato eh o DEM!");
    }
    else if(inicialFinal == 45){
        printf("O partido de seu candidato eh o PSDB!");
    }
    else{
        printf("O partido de seu candidato eh o PCdoB!");
    }
    getch();
}
