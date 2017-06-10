#include <stdio.h> 
#include <stdlib.h> 

		void assunto (){
			char assunto[100];
			printf("Escolha um assunto: \n");
			scanf("%s",&assunto);
			printf("\nPesquise sobre %s nos melhores sites ou livros \n",assunto);
			printf("Estude o conteudo que voce pesquisou sobre %s \n\n",assunto);
			system("pause");
			}
			
		void explique(){
			printf ("Anote as informacoes \n");
			printf ("Como se estivesse explicando o assunto para alguem \n\n ");
			system("pause"); 
			}
			
		void fale(){
			printf("Agora que voce escreveu o assunto \n Leia e fale e voz alta para ajudar a memorizacao do assunto.\n\n");
			system("pause");
			}
			
		void identifique(){
			printf("Agora que vc ja leu \n Identifique os pontos que voce mais domina e os que voce menos domina e separe todos.\n");
			printf("Agora que voce dominou todos os topicos \n Refaça sua explicacao de uma maneira mais simplificada \n\n");
			system("pause");
			}
			
			
		void revise(){
			int opcao=0;
			printf("Voce ja dominou os topicos que estava com dificuldade? 1-Sim 2-Nao \n\n\n");
			scanf("%i",&opcao);
			if (opcao==2){
				explique();
				fale();
				identifique();
				revise();
			}
				else
				printf ("\n PARABENS!!você aprendeu a técnica de Feymman\n\n");
			}

int main(){

		printf("Tecnica de Feymman \n\n");

			printf("\nPasso 1 \n\n");
				assunto ();

			printf("\nPasso 2 \n\n");
				explique();
		
			printf("\nPasso 3 \n\n");
				fale();
		
			printf("\nPasso 4 \n\n");
				identifique();

		printf("\nPasso 5 \n\n");
		revise();
	
	system("pause"); 
	return 0;
}
/*	Hian Rodrigo RA : 2216203848
 	Vitor Oliveira RA: 2216107359
	Rodrigo Severo RA: 2216106876 */ 
