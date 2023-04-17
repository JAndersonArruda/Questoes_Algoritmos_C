/*68. Escreva um programa que leia o valor do salário bruto de um empregado e calcule o
seu salário líquido. Para calcular o valor do salário líquido, deve-se primeiramente
descontar uma taxa de 11%, correspondente ao valor da contribuição previdenciária.
Depois, do valor restante, deve-se descontar o valor do imposto de renda, que varia de
acordo com o valor do salário. O percentual que deve ser descontado para o imposto
de renda varia de acordo com a tabela abaixo.*/

#include <stdio.h>

void main(){
    float salarioBruto, salarioLiquido;
    printf("Informe o seu salario: ");   // 2000 / 3000
    scanf("%f", &salarioBruto);
    float porcentagem = ((float)salarioBruto * 1.11) - salarioBruto;
    printf("/n%.2f \n", porcentagem); // 220 / 330

    salarioLiquido = salarioBruto - porcentagem;
    printf("/n%.2f \n", salarioLiquido); // 1780  /  2670

    float salarioFinal, imposto;

    if(salarioLiquido <= 1903.98){
        salarioFinal = salarioLiquido;
        printf("O valor final do seu salario eh: R$ %.2f", salarioFinal);
    }
    else if(salarioLiquido <= 2826.65){
        imposto = ((float)salarioLiquido * 1.075) - salarioLiquido;
        salarioFinal = salarioLiquido - imposto;
        printf("O valor final do seu salario eh: R$ %.2f", salarioFinal);
    }
    else if(salarioLiquido <= 3751.05){
        imposto = ((float)salarioLiquido * 1.15) - salarioLiquido;
        salarioFinal = salarioLiquido - imposto;
        printf("O valor final do seu salario eh: R$ %.2f", salarioFinal);
    }
    else if(salarioLiquido <= 4664.68){
        imposto = ((float)salarioLiquido * 1.225) - salarioLiquido;
        salarioFinal = salarioLiquido - imposto;
        printf("O valor final do seu salario eh: R$ %.2f", salarioFinal);
    }
    else{
        imposto = ((float)salarioLiquido * 1.275) - salarioLiquido;
        salarioFinal = salarioLiquido - imposto;
        printf("O valor final do seu salario eh: R$ %.2f", salarioFinal);
    }
    getch();
}
