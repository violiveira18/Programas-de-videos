#include<stdio.h>
#include<stdlib.h>


int main(){

  char atv1 [50],atv2 [50],atv3 [50],atv4 [50];
  char rotina [3];
  int i,a,op ;
       
  	 printf("Escolha 4 atividades de alto impacto para colocar na semana\n");
       printf("Ideia numero 1: ");
       scanf("%s",&atv1);
       printf("Ideia numero 2: ");
       scanf("%s",&atv2);	
	   printf("Ideia numero 3: ");
       scanf("%s",&atv3);
       printf("Ideia numero 4: ");
       scanf("%s",&atv4);	
       
          for (i = 0 ; i < 4; i++){
           a=1+i;
            printf("\nSemana %i\n1 - %s\n2 - %s\n3 - %s\n4 - %s\n",a, atv1, atv2, atv3, atv4);
               a=a+1;
              }
	
	system("pause");
	
	printf("Quer fazer organizar a rotina do proximo mes?\n1-Sim\n2-Nao\n");
	
       scanf("%i",&op);
       
       if(op == 1){
       	return main();
	   }
	   else{
	   	return 0;
	   }
		
return 0;

}

/*	Hian Rodrigo RA : 2216203848
 	Vitor Oliveira RA: 2216107359
	Rodrigo Severo RA: 2216106876 */
