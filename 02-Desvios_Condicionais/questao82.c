/*82. Escreva um programa que leia as tr�s notas de um aluno e verifique se o mesmo est�
aprovado por m�dia, se far� prova final ou se est� reprovado por m�dia. Caso o aluno
tenha que fazer a prova final, o programa deve informar quanto ele ter� que tirar na
prova. Voc� pode considerar que a m�dia m�nima para a aprova��o por m�dia � 7 e
que a m�dia m�nima para fazer a prova final � 4. O c�lculo da prova final � calculado
atrav�s da f�rmula abaixo.*/

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
