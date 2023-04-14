/*34.Escreva um programa que leia o dia do mês em que o cliente fez uma compra e o
prazo de entrega dado pelo vendedor e calcule o dia do mês (atual ou dos meses
seguintes) em que o cliente deve receber o produto. Para resolver este programa,
considere que cada mês tem exatamente 30 dias.*/

#include <stdio.h>

const int Meses = 30;

int calculoData(int date, int date_final){
    int mes;
    printf("Informe o numero do mes do dia em que foi realizado a compra: ");  // 04 -- abril
    scanf("%d", &mes);

    int indice_mes = (date + date_final) / Meses;        //80 dividido por 30
    int data_dia = (date + date_final) % Meses;          // 20             2
    int data_mes = mes + indice_mes;
    printf("O prazo limite estimado para a chegada do seu produto eh: %d / 0%d", data_dia, data_mes);
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
