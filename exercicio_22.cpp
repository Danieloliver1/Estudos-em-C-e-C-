/*22. Criar um programa que receba 3 notas de 3 alunos. Caso o aluno n�o obtenha nota superior a
6 na m�dia entre a duas notas AV1 e AV2, inserir nota AV3 e substituir a menor entre Av1 e
Av2, recalcular a m�dia e mostrar o resultado da aprova��o ou reprova��o dos alunos.*/


#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>


int main (){
		char nome[50];
	float av1=0, av2=0, av3=0;
	float media, media1;
	
  for(int i= 0; i<3; i++){	
	printf("\n-------------------------");
	printf("\nEscreva o nome do aluno: ");
	scanf("%s",&nome[50]);
	printf("Escreva sua AV1:");
	scanf("%f",&av1);
	printf("Escreva sua AV2:");
	scanf("%f",&av2);
	
	if(av1>=6 && av2>=6){
		printf("Aprovado\n");
		media=(av1+av2)/2;
		printf("Media %.1f",media);
	}			
	if(av1>av2 && av1<6 || av2<6 ){
	   printf("Digite sua AV3 ");
	   scanf("%f",&av3);
	   media1 = (av2+av3)/2;
	   printf ("Media %.1f",media1);
	   if(media1>=6){
	   	printf("\nAprovado");
	   }else{
	   	printf("\nreprovado");
	   }
	   }else if(av2>av1 && av1<6 || av2<6){
	   printf("Digite sua AV3 ");
	   scanf("%f",&av3);
	   media1 = (av2+av3)/2;
	   printf ("Media %.1f",media1);
	   if(media1>=6){
	   	printf("\nAprovado");
	   }else{
	   	printf("\nreprovado");
	   }
	   }	   
	   	
	}


	
	
	return 0;
	system("pause");	

}

	


	 
	
	
	




