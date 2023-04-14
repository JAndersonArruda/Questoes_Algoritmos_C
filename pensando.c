/*34.Escreva um programa que leia o dia do mês em que o cliente fez uma compra e o
prazo de entrega dado pelo vendedor e calcule o dia do mês (atual ou dos meses
seguintes) em que o cliente deve receber o produto. Para resolver este programa,
considere que cada mês tem exatamente 30 dias.*/

#include <stdio.h>

const int Meses = 30;

int calculoData(int date, int date_final){
    char mes[20];
    printf("Informe o mes do dia em que foi realizado a compra: ");  // abril
    scanf("%s", &mes);

    int indice = date; //20
    while(date + date_final){
        indice ++;
    }


}
void main(){
    int dia, prazo_entrga;
    printf("Informe o dia do mes em que foi realizada a compra: "); // 20
    scanf("%d", &dia);
    printf("Informe o prazo da entrega informado pelo vendedor: ");  // 60 dias
    scanf("%d", &prazo_entrga);
    int data = calculoData(dia, prazo_entrga);
    getch();
}
