/*21. Faça um programa que, 
para um número indeterminado de pessoas: 
leia a idade de cada uma, sendo que a idade 0 (zero) 
indica o fim da leitura e não deve ser considerada. A seguir calcule:
a) O número de pessoas;
b) A idade média do grupo;
c) Menor idade e a maior idade.*/

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>


int main(){
	int media=0,menor=0,maior=0;
	int qt,idade;
	printf("Quantidade de pessoas ");
	scanf("%d",&qt);
	
	for(int i=0; i<qt;i++){
		printf("idade %d: ",i+1);
		scanf("%d",&idade);
		media+=idade/qt;				
		if(idade<menor){
			menor=idade;
		}else if(idade>maior){
			maior=idade;	
		
	}}
	
	printf("\nMedia do grupo %d",media);
	printf("\nMenor idade do gupo %d",menor);
	printf("\nMaior idade do gupo %d",maior);
	return 0;
}
