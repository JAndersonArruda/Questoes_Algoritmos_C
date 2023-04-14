/*32. O carro de João consegue percorrer em média 14 km consumindo 1 litro de
combustível. Escreva um programa que leia o valor da distância que João vai percorrer
durante uma viagem e o preço atual de um litro de combustível e calcule quanto ele
deverá gastar com combustível durante a viagem.*/

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
