//. Escreva um programa que leia 10 n�meros e:
//a. Escreva o menor valor lido e o maior valor lido
//b. Some-os.
//c. Imprima sua m�dia.

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>

	int main (){
		
  	system("cls");
	setlocale(LC_ALL,"Portuguese");
  	
  	int Numero[10];
  	
  	//ler vetor
  	InserirValores:
  	for(int i = 0; i < 10; i++){
        system("cls");
        printf("N�mero[%d]: ",i+1);
        scanf("%d", &Numero[i]);    
    }
  	//Escrever vetor
  	printf("Lista de N�meros: ");
  	for(int i =0; i < 10; i++){
  		printf(" %d", Numero[i]);
	}
	
	//maior e menor
	int maior = 0; menor = 0;
	
	Maior = Numero[0];
	Menor = Numero[0];
	
	for(int i =1; i < 10; i++){	
		if(Numero[i] > Maior){
		   Maior = Numero[i];	
		}else if(Numero[i]< Menor){
			Menor = Numero[i];
		}
	}
	
	printf("Maior: %d\n",Maior);
	printf("Menor:  %d\n", Menor);
	return 0;
	system("pause");
}
