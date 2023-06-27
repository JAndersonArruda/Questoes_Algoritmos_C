/*162. Escreva um programa que leia um número inteiro entre 0 e 255 e calcule o seu valor
correspondente em binário.*/

#include <stdio.h>
const int Binary = 2;
void main()
{
    int num;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    int quociente = num;
    int cont = 1;
    while (quociente > 1)
    {
        quociente = quociente / Binary;
        cont ++;
    }
    quociente = num;
    int vetBin[cont];
    int limit = cont-1;
    int a;
    for (a = 0; a < limit; a++)
    {
        vetBin[a] = quociente % Binary;
        quociente = quociente / Binary;
    }
    vetBin[cont-1] = quociente;
    for (a = 0; a < cont/2; a ++)
    {
        int aux = vetBin[a];
        vetBin[a] = vetBin[(cont-1)-a];
        vetBin[(cont-1)-a] = aux;
    }
    printf("\nO valor de %d em binario eh: ", num);
    for (a = 0; a < cont; a ++)
    {
        printf("%d", vetBin[a]);
    }
    getch();
}