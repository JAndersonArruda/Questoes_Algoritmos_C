/*82. Escreva um programa que leia as três notas de um aluno e verifique se o mesmo está
aprovado por média, se fará prova final ou se está reprovado por média. Caso o aluno
tenha que fazer a prova final, o programa deve informar quanto ele terá que tirar na
prova. Você pode considerar que a média mínima para a aprovação por média é 7 e
que a média mínima para fazer a prova final é 4. O cálculo da prova final é calculado
através da fórmula abaixo.*/

#include <stdio.h>
#include <math.h>

void main(){
    float nota1, nota2, nota3;
    printf("Informe as tres notas do semestre: ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    float mediaParcial = (nota1 + nota2 + nota3) / 3;
    if(mediaParcial >= 7){
        printf("O aluno esta aprovado por media!");
    }
    else if(mediaParcial >= 4){
        float notaFinal = (25 - (3 * mediaParcial)) / 2;
        printf("O aluno ira para a final precisando de alcancar nota: %.2f", notaFinal);
    }
    else{
        printf("O aluno esta retido! E tera que repetir a disciplina novamente.");
    }
    getch();
}
