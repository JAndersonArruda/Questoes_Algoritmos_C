/*66. Escreva um programa que leia o número de pessoas que vão participar de um
churrasco e calcule quantos quilos de carne devem ser comprados. Para isso,
considere que cada pessoa consome 250 g de carne. A resposta do programa deve ser
um número inteiro.*/

#include <stdio.h>

const int ConsumoPessoa = 250;  //250g
const int IndiceKilos = 1000;

void main(){
    int numPessoas;
    printf("Informe o numeros de pessoas que irao particpar do churasco: ");
    scanf("%d", &numPessoas);
    int resto = (numPessoas * ConsumoPessoa) % IndiceKilos;
    int kilos;
    if(resto != 0){
        kilos = ((numPessoas * ConsumoPessoa) / IndiceKilos) + 1;
    }else{
        kilos = (numPessoas * ConsumoPessoa) / IndiceKilos;
    }
    printf("A quantidade de carne necessaria para o churasco eh: %dkg \n", kilos);
    getch();
}

