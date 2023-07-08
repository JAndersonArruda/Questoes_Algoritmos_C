/*188. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
a seguir leia um número inteiro N e determine a quantidade de números primos na
coluna N.*/

#include <stdio.h>

const int ORDEM = 5;

void main()
{
    float matriz[ORDEM][ORDEM];
    int i, j;
    for(i = 0; i < ORDEM; i ++)
    {
        for(j = 0; j < ORDEM; j ++)
        {
            printf("Informe um numero real: ");
            scanf("%f", &matriz[i][j]);
        }
    }
    printf("\nA matriz eh:\n");
    for(i = 0; i < ORDEM; i ++)
    {
        for(j = 0; j < ORDEM; j ++)
        {
            printf("%.1f  ", matriz[i][j]);
        }
        printf("\n");
    }
    int num;
    do 
    {
        printf("Informe um numero entrem 1 e %d: ", ORDEM);
        scanf("%d", &num);
        if (num >= 1 && num <= ORDEM)
        {
            int primo = 0;
            int quantidade = 0;
            for(i = 0; i < ORDEM; i ++)
            {
                for(j = 1; j <= matriz[i][num]; j ++)
                {
                    if((int)matriz[i][num] % j == 0)
                    {
                        primo ++;
                    }
                }
                if(primo == 2)
                {
                    quantidade ++;
                }
            }
            printf("a qauntidade d numeros primos na coluna %d eh: %d", num, quantidade);
        }
        else 
        {
            printf("Informe um valor valido!\n");
        }
    }
    while(num < 1 || num > ORDEM);
    // getch();
}