/*116. Escreva um programa que leia o nome, o sexo e a idade de um grupo de 20 pessoas e
calcule o percentual de mulheres que tem entre 18 e 21 anos.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int NumGrupo = 2;

void main()
{
    int contIdeal = 0;
    int cont = 0;

    int i;
    for(i = 1; i <= NumGrupo; i ++)
    {
        char nome[30];
        char sexo;
        int idade;
        printf("Informe o seu nome: ");
        gets(nome);
        printf("Informe F para feminino e M para masculino: ");
        sexo = getchar();
        printf("Informe o sua idade: ");
        scanf("%d", &idade);
        printf("\n");

        if(sexo == 'F' || sexo == 'f')
        {
            if(idade >= 18 && idade <= 23);
            {
                contIdeal ++;
            }
        }
        else
        {
            cont ++;
        }
    }
    int total = contIdeal + cont;
    float porcentMulheres = ((float)contIdeal * 100.00) / total;
    printf("Resultado: %.1f%% mulheres estao na faixa de 18 a 23.\n", porcentMulheres);
    getch();
}
