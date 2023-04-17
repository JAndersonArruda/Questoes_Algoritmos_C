/*65. Escreva um programa que leia a idade de uma pessoa e verifique se ela é criança (0-12
anos), adolescente (13-17 anos), adulta (18-59) ou idosa (acima de 60 anos).*/

#include <stdio.h>

void main(){
    int idade;
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    if(idade <= 12){
        printf("De acdordo com sua idade voce eh uma crianca!");
    }else if(idade <= 17){
        printf("De acdordo com sua idade voce eh um(a) adolescente!");
    }else if(idade <=59){
        printf("De acdordo com sua idade voce eh um(a) adulto(a)!");
    }else{
        printf("De acdordo com sua idade voce eh um(a) idoso(a)!");
    }
    getch();
}
