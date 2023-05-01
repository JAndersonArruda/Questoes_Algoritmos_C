/*94. Escreva um programa que leia um valor inteiro a ser sacado pelo usuário e identifique
quantas cédulas de cada tipo devem ser usadas para que o saque seja efetuado. Você
pode supor que o caixa tem cédulas de R$ 10,00, R$ 20,00, R$ 50,00 e R$ 100,00. O
valor máximo de um saque é R$ 1000,00 e, para cada saque, deve-se priorizar o uso
das cédulas maiores.*/

#include <stdio.h>

const int Cem = 100;
const int Cinq = 50;
const int Vint = 20;
const int Dez = 10;

void main()
{
    int saque;
    printf("Informe o valor do saque: ");
    scanf("%d", &saque);
    int notasCem;
    int notasCinquenta;
    int notasVinte;
    int notasDez;
    int resto;
    if(saque <= 1000){
        notasCem = saque / Cem;
        if(saque % Cem != 0){
            resto = saque % Cem;
            notasCinquenta = resto / Cinq;
            printf("Serao necessarias %d nota(s) de cem", notasCem);
            if(resto % Cinq != 0){
                resto = resto % Cinq;
                notasVinte = resto / Vint;
                printf(", %d nota(s) de cinquenta", notasCinquenta);
                if(resto % Vint != 0){
                    resto = resto % Vint;
                    notasDez = resto / Dez;
                    printf(", %d nota(s) de vinte", notasVinte);
                    if(resto % Dez != 0){
                        resto = resto % Dez;
                        printf(" e %d nota(s) de dez.", notasDez);
                        printf("\nO valor restante inferior a uma nota de dez reais eh R$ %d,00", resto);
                    }
                    else{
                        printf(" e %d nota(s) de dez.", notasDez);
                    }
                }
                else{
                    printf(" e %d nota(s) de vinte.", notasVinte);
                }
            }
            else{
                printf(" e %d nota(s) de cinquenta.", notasCinquenta);
            }
        }
        else{
            printf("Serao necessarias %d nota(s) de cem.", notasCem);
          }
    }
    else{
        printf("O valor do saque ultrapassa o limite de R$ 1000,00");
    }
    getch();
}
