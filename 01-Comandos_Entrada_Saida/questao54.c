/*54. Seu Joaquim é um motorista que viaja todos os dias de Cajazeiras para João Pessoa
para fazer entregas para empresa na qual trabalha. Durante o percurso, ele para
realizar entregas em Sousa, Patos, Campina Grande e João Pessoa. Considerando que
seu Joaquim gasta 50 minutos no percurso de Cajazeiras para Sousa, 2 horas no
percurso entre Sousa e Patos, 2 horas e 30 minutos no percurso entre Patos e Campina
Grande e 2 horas no percurso entre Campina Grande e João Pessoa, e que cada
entrega demora exatamente 20 minutos, escreva um programa que leia o horário em
que seu Joaquim saiu de Cajazeiras (horas e minutos) e calcule o horário em que ele
chegará em cada cidade do itinerário.*/

#include <stdio.h>

const int PercursoCZ_SS = 50;
const int PercursoSS_PT = 120;
const int PercursoPT_CG = 150;
const int PercursoCG_JP = 120;
const int TempoEntrega = 20;
const int Hora = 60;

void main(){
    int saidaHora, saidaMinuto;
    printf("Informe a hora e os minutos em que Seu Josaquim saiu de Cajazieras: ");
    scanf("%d%d", &saidaHora, &saidaMinuto);

    printf("\n------------------Intinerairo-------------------\n");
    printf("Saida Cajazeiras ---------------------- %02d:%02d \n", saidaHora, saidaMinuto);

    //Sousa
    saidaHora += (saidaMinuto + PercursoCZ_SS) / Hora;
    saidaMinuto = PercursoCZ_SS % Hora;
    printf("Chegada Sousa ------------------------- %02d:%02d \n", saidaHora, saidaMinuto);

    //Patos
    saidaHora += (saidaMinuto + PercursoSS_PT + TempoEntrega) / Hora;
    saidaMinuto = (saidaMinuto + (PercursoSS_PT + TempoEntrega) % Hora) % Hora;
    printf("Chegada Patos ------------------------- %02d:%02d \n", saidaHora, saidaMinuto);

    //Campina Grande
    saidaHora += (saidaMinuto + PercursoPT_CG + TempoEntrega) / Hora;
    saidaMinuto = (saidaMinuto + (PercursoPT_CG + TempoEntrega) % Hora) % Hora;
    printf("Chegada Campina Grande ---------------- %02d:%02d \n", saidaHora, saidaMinuto);

    //Joao Pessoa
    saidaHora += (saidaMinuto + PercursoCG_JP + TempoEntrega) / Hora;
    saidaMinuto = (saidaMinuto + (PercursoCG_JP + TempoEntrega) % Hora) % Hora;
    printf("Chegada Joao Pessoa ------------------- %02d:%02d \n", saidaHora, saidaMinuto);
    getch();
}
