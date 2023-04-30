/*50. Ana chegou a um consultório médico para uma consulta de rotina. Neste consultório,
o médico atende os seus pacientes de acordo com a ordem em que eles chegaram
(cada paciente recebe uma senha com o número da sua ordem de chegada) e cada
consulta demora exatamente 25 minutos. Com base nestas informações, escreva um
programa que leia um número inteiro correspondendo à hora e outro correspondendo
aos minutos em que Ana chegou ao consultório e o número da senha que ela recebeu
e determine a hora em que ela será atendida. Para isso, considere que ela chegou ao
consultório no exato momento em que o médico ia atender o paciente que recebeu a
senha 1.*/

#include <stdio.h>

void main(){
    int hora, minutos, senha;
    printf("Informe a hora e os minutos que chegou ao consulturio: ");
    scanf("%d%d", &hora, &minutos);
    printf("Informe a sua senha: ");
    scanf("%d", &senha);
    int indice = (senha - 1) * 25;
    int tempo = minutos + indice;
    hora += tempo / 60;
    minutos = tempo % 60;
    printf("Voce sera atendida as %02d:%02d \n", hora, minutos);
    getch();
}
