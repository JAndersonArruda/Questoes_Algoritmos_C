/*90. Escreva um programa que leia um número inteiro entre 1 e 12 correspondente a um
mês do ano e verifique o trimestre a que este mês pertence.*/

#include <stdio.h>

void main(){
    int number;
    printf("Informe o numero do mes: ");
    scanf("%d", &number);
    if(number >=1 && number <=3){
        printf("O mes informado esta no primeiro trimestre!");
    }
    else if(number >3 && number <=6){
        printf("O mes informado esta no segundo trimestre!");
    }
    else if(number >6 && number <=9){
        printf("O mes informado esta no terceiro trimestre!");
    }
    else{
        printf("O mes informado esta no quarto trimestre!");
    }
    getch();
}
