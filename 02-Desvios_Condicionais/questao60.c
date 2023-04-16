/*60. Escreva um programa que leia o número de pessoas que vão participar de um
churrasco e calcule quantos quilos de carne devem ser comprados. Para isso,
considere que cada pessoa consome 250 g de carne.*/

#include <stdio.h>

const int ConsumoPessoa = 250;  //250g
const int IndiceKilos = 1000;

void main(){
    int numPessoas;
    printf("Informe o numeros de pessoas que irao particpar do churasco: ");
    scanf("%d", &numPessoas);
    float kilos = ((float)numPessoas * ConsumoPessoa) / IndiceKilos; // chama-se kych, onde transforma a divisão em float
    printf("A quantidade necessaria para o churasco eh: %.2fkg \n", kilos);
    getch();
}
