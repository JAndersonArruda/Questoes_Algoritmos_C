/*78. Alfredo tem um carro flex e sempre fica na dúvida se é melhor abastecê-lo com álcool
ou gasolina. Um dia um de seus amigos o ensinou a seguinte dica: “Pegue o valor do
preço da gasolina e multiplique por 0,7. Se o valor for menor ou igual ao valor do preço
do álcool, abasteça com gasolina. Caso contrário, abasteça com álcool.” Com base
nestas informações, escreva um programa que leia o preço do litro da gasolina e do
álcool e verifique se é melhor abastecer com álcool ou com gasolina.*/

#include <stdio.h>

void main(){
    float gasolina, alcool;
    printf("Informe o valor do litro da gasolina: ");
    scanf("%f", &gasolina);
    printf("Informe o valor do litro do alcool: ");
    scanf("%f", &alcool);
    float indice = gasolina * 0.7;
    if(indice < alcool || indice == alcool){
        printf("A opcao mais economica eh abastecer com gasolina!");
    }
    else{
        printf("A opcao mais economica eh abastecer com alcool!");
    }
}
