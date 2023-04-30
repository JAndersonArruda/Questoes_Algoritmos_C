/*50. Ana chegou a um consult�rio m�dico para uma consulta de rotina. Neste consult�rio,
o m�dico atende os seus pacientes de acordo com a ordem em que eles chegaram
(cada paciente recebe uma senha com o n�mero da sua ordem de chegada) e cada
consulta demora exatamente 25 minutos. Com base nestas informa��es, escreva um
programa que leia um n�mero inteiro correspondendo � hora e outro correspondendo
aos minutos em que Ana chegou ao consult�rio e o n�mero da senha que ela recebeu
e determine a hora em que ela ser� atendida. Para isso, considere que ela chegou ao
consult�rio no exato momento em que o m�dico ia atender o paciente que recebeu a
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
