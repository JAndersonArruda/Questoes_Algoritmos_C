/*41. Escreva um programa que leia a quantidade de horas trabalhadas por um funcionário
de uma empresa durante um mês e o valor de cada hora trabalhada e determine o seu
pagamento. O programa deve considerar que a carga-horária mensal do funcionário é
de 160 horas e que o valor de cada hora extra corresponde ao valor da hora
trabalhada acrescido de uma taxa de 50%. Para resolver a questão, considere que a
quantidade de horas trabalhadas nunca será inferior a 160.*/

#include <stdio.h>

const int Carga_Horaria = 160;

void main(){
    int horas;
    float valor_hora;
    printf("Informe a quantidade de horas trabalhadas neste mes: ");
    scanf("%d", &horas);
    printf("Informe o valor pago por hora: ");
    scanf("%f", &valor_hora);

    float salario_provisorio = Carga_Horaria * valor_hora;
    float hora_extra = horas - Carga_Horaria;
    float salario_extra = hora_extra * (valor_hora * 1.5);
    float salario_final = salario_provisorio + salario_extra;
    printf("O salario deste mes deste empregado eh: R$ %.2f \n", salario_final);
    getch();
}
