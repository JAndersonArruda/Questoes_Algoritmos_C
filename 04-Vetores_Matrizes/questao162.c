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
    int vet[cont];
    int a;
    int limit = cont - 1;
    quociente = num;
    for (a = 0; a < limit; a++)
    {
        vet[a] = quociente % Binary;
        quociente = quociente / Binary;
    }
    printf("\n");
    vet[cont-1] = quociente;
    for (a = 0; a < cont/2; a ++)
    {
        int aux = vet[a];
        vet[a] = vet[(cont-1)-a];
        vet[(cont-1)-a] = aux;
    }
    printf("O valor de %d em binario eh: ", num);
    for (a = 0; a < cont; a ++)
    {
        printf("%d", vet[a]);
    }
    getch();
}