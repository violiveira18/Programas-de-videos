#include <stdio.h>
#include <stdlib.h>

	int main (){
		//Perdendo o Habito de fumar no mes;
	int a, resposta;
		char deixa[100];
		int MES,SEMANA, VSEMANA,QFUMADO,opc,RECOMPENSA,ncigarro;
		double media;
		printf ("PERDENDO O HABITO DE FUMAR COM O LOOP DO HABITO EM UM MES\n\n");
		printf ("Diga algo que lhe faca bem e te faz esquecer o cigarro ?\n");
		scanf ("%s", &deixa);
		VSEMANA = 1;
		int n_sucesso;
		int count=0;

		printf ("Quantos cigarros em media você costuma fumar em uma semana ?\n");
		scanf ("%d", &ncigarro);
		
				for (SEMANA = 0; SEMANA < 4; SEMANA++){
						printf ("Semana %d\nQuantos cigarros voce fumou esta semana ?\n", VSEMANA);
							scanf ("%d", &QFUMADO);
							count= count + QFUMADO;
						if(QFUMADO >= ncigarro ){
						goto teste;
						}
						printf ("Semana %d\n EM algum momento Voce conseguiu %s na hora que estava afim de fumar ?\n1- SIM 2- NAO\n\n", VSEMANA, deixa);
							scanf ("%d", &opc);
						if(opc == 1 ){
	afimdefumar:	printf("quantas dessas %d veses ?\n\n",QFUMADO);
							scanf("%d",&n_sucesso);
							if (n_sucesso > QFUMADO || n_sucesso <= 0){
								printf("Numero Invalido\n");
								goto afimdefumar;
							}
						}
						printf ("Se sentiu mais esbelto e respirou melhor essa semana com menos cigarros ?\n1- SIM 2- NAO\n\n", RECOMPENSA);
							scanf ("%d", &RECOMPENSA);
					
						
						teste:	if ((QFUMADO < ncigarro) && (opc == 1)){
								printf ("Voce foi muito bem esta semana\ne esta FAZENDO o loop do HABITO\n\n\n");
							}
							else{
								printf ("Voce deve melhorar em um dos pontos do LOOP\n\n");
							}
			
			 VSEMANA++;
			
		}
		
		if (count < ncigarro*4){
			printf("PARABENS COM O LOOP DO HABITO VOCE ESTA DEIXANDO DE FUMAR\n\n\n");
		}else{
				printf("OTARIO PARA DE FUMAR\n VAI MORRER DE CANCER DE PUMAO\n");
		}
		system ("pause");
		return 0;
	}
	
	/*	Hian Rodrigo RA : 2216203848
 	Vitor Oliveira RA: 2216107359
	Rodrigo Severo RA: 2216106876 */ 
