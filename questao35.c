/*35. Escreva um programa que leia o valor de uma distância em metros e calcule o seu
valor correspondente em quilômetros, hectômetros, decâmetros, centímetros,
decímetros e milímetros.*/

#include <stdio.h>

int conversaoMedida(float valor1){
    float unidade_km = valor1 / 1000;
    float unidade_hc = valor1 / 100;
    float unidade_dam = valor1 / 10;
    float unidade_dm = valor1 * 10;
    float unidade_cm = valor1 * 100;
    float unidade_mm = valor1 * 1000;
    printf("\n\n\t --------------------------Conversao de Medidas----------------------------\n\n");
    printf("\t Quilometro \t----\t %.2f km \n", unidade_km);
    printf("\t Hectometro \t----\t %.2f hc \n", unidade_hc);
    printf("\t Decametro  \t----\t %.2f dam \n", unidade_dam);
    printf("\t Deciometro \t----\t %.2f dm \n", unidade_dm);
    printf("\t Centimetro \t----\t %.2f cm \n", unidade_cm);
    printf("\t Milimetro  \t----\t %.2f mm \n", unidade_mm);
}

void main(){
    float distancia;
    printf("Informe o valor da distancia em metros: "); // 20 m
    scanf("%f", &distancia);
    int conersor = conversaoMedida(distancia);
    getch();
}
