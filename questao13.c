/*13. Escreva um programa que leia um valor em KB e calcule o seu valor correspondente
em bits, bytes, MB e GB.*/

#include <stdio.h>

const float KB_em_Bites = 8000;
const float KB_em_Bytes = 1000;
const float MB_em_KB = 1000;
const float GB_em_KB = 1000000;
void main(){
    float tamanhoKB;
    printf("Informe o tamanho de um arquivo em KB: ");
    scanf("%f", &tamanhoKB);
    float tamanho_Bites = tamanhoKB * KB_em_Bites;
    float tamanho_Bytes = tamanhoKB * KB_em_Bytes;
    float tamanho_MB = tamanhoKB / MB_em_KB;
    float tamanho_GB = tamanhoKB / GB_em_KB;
    printf("Resultado: \nTamanho em Bites: %.2f \nTamanho em Bytes: %.2f \n", tamanho_Bites, tamanho_Bytes);
    printf("Tamanho em MegaBytes: %.4f \nTamanho em GigaBytes: %.5f \n", tamanho_MB, tamanho_GB);
    getch();
}
