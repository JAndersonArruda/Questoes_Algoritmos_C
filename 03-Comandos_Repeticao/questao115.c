/*115. Escreva um programa que leia o peso e a altura de um grupo de 20 pessoas e calcule o
percentual de pessoas abaixo do peso, o percentual de pessoas acima do peso e o
percentual de pessoas que estão dentro da faixa de peso adequada.*/

#include <stdio.h>
#include <stdlib.h>

const int NumGrupo = 20;

void main()
{
    float peso, altura;
    int contInferior = 0;
    int contIdeal = 0;
    int contSuperior = 0;
    int i;
    for(i = 1; i <= NumGrupo; i ++)
    {
        printf("Informe o seu peso e sua altura: ");
        scanf("%f%f", &peso, &altura);
        float imc = peso / (altura * altura);
        if(imc < 18.5)
        {
            contInferior ++;
        }
        else if(imc >= 18.5 && imc <= 24.9)
        {
            contIdeal ++;
        }
        else
        {
            contSuperior ++;
        }
    }
    int total = contIdeal + contInferior + contSuperior;
    float Inferior = ((float)contInferior * 100.00) / total;
    float Ideal = ((float)contIdeal * 100.00) / total;
    float Superior = ((float)contSuperior * 100.00) / total;
    printf("Resultado: Inferior -> %.2f%%, Ideal -> %.2f%% e Superior -> %.2f%%", Inferior, Ideal, Superior);
    getch();
}
