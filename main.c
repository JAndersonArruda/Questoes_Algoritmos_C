#include <stdio.h>

void main(){
	int tamanho_mb, taxa;
	printf("informe o tamanho do arquivo:");
	scanf("%d", &tamanho_mb);
	printf("informe a taxa de dowload:");
	scanf("%d", &taxa);
	int tamanhokb = tamanho_mb*1024;
	int total = tamanhokb/taxa;
	int horas = total/3600;
	int resto = total%3600;
	int minutos = resto/60;
	int segundos = resto%60;
	printf("o dowload vai demorar %d horas %d minutos %d segundos", horas, minutos, segundos);
	getch();
}
