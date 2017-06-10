#include <stdio.h>
#include <stdlib.h>

	int main (){
	int hr, minuto, total;
	int pomodoro = 25, pomodori = 0, aux, result;

		aux = 0;
			printf ("Quantos pomodoris você terá de fazer:\n\n\n");
			printf ("Quantas horas você vai trabalhar ?\n");
			scanf ("%d", &hr);
			printf ("Quanto minutos você vai trabalhar ?\n");
			scanf ("%d", &minuto);

int  temp= 0;
int  x = hr * 60;

total = x + minuto;

int lol = 1;

	for (temp= 0; temp < total; pomodori ++){
		temp = temp + 30; // troquei aqui pra 30 ai ja conta os 5m de descanço
			if(pomodori/4 == lol ){
			temp = temp + 15; // e aqui so conta o intervalo maior de 20 - os 5 q ja ta no pomodoro
			lol ++;
		}
	} 

	printf ("No seu Pomodoro você fara %d Pomodoris\n", pomodori-1);
	system ("pause");
	return 0;
}
/*	Hian Rodrigo RA : 2216203848
 	Vitor Oliveira RA: 2216107359
	Rodrigo Severo RA: 2216106876 */ 
