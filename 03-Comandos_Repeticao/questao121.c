/*121. Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e
um número inteiro N e imprima todos os termos da progressão menores ou iguais a N
(caso a razão seja positiva) ou todos os termos maiores ou iguais a N (caso a razão seja
negativa).*/

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

void main()
{
    int inicio, razao, num;
    printf("Informe o inicio e a razao da PG: ");
    scanf("%d%d", &inicio, &razao);
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    int progressao = inicio;
    if(razao > 0)
    {
        while(progressao <= num)
        {
            printf("%d ", progressao);
            progressao += razao;
        }
    }
    else if(razao < 0)
    {
        while(progressao >= num)
        {
            printf("%d ", progressao);
            progressao -= abs(razao);
        }
    }
    getch();
}
