/*32. O carro de Jo�o consegue percorrer em m�dia 14 km consumindo 1 litro de
combust�vel. Escreva um programa que leia o valor da dist�ncia que Jo�o vai percorrer
durante uma viagem e o pre�o atual de um litro de combust�vel e calcule quanto ele
dever� gastar com combust�vel durante a viagem.*/

#include <stdio.h>

const int Consumo_KM = 14;

int consumoCombustivel(float valor1, float valor2){
    float consumo_litro = valor1 / Consumo_KM;
    float valor_consumo = valor2 * consumo_litro;
    return valor_consumo;
}

void main(){
    float distancia, preco;
    printf("Informe a distancia percorrida: ");
    scanf("%f", &distancia);
    printf("Informe o valor do litro do combustivel: ");
    scanf("%f", &preco);
    float valor_gasto = consumoCombustivel(distancia, preco);
    printf("A o valor que sera necessario a ser gasto com combustivel para a distancia informada eh: R$ %.2f",
           valor_gasto);
    getch();
}
