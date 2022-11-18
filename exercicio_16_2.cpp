//16. Escreva um programa que leia 10 números e:
//a. Escreva o menor valor lido e o maior valor lido
//b. Some-os.
//c. Imprima sua média.

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>

	int main (){
		
  	system("cls");
	setlocale(LC_ALL,"Portuguese");
  	
  	int Numero[10], Soma = 0, Maior, Menor, Retorno;
  	
  	//ler vetor
  	InserirValores:
  	for(int i = 0; i < 10; i++){
        system("cls");
        printf("Número[%d]: ",i+1);
        scanf("%d", &Numero[i]);    
    }
  	//Escrever vetor
  	printf("Lista de Números: ");
  	for(int i =0; i < 10; i++){
  		printf(" %d", Numero[i]);
  		
	}
	Menu:
	int Operacao;
	printf("\n1 - Maior e Menor \n2 - Soma\n3 - Média\n");
	printf("Operação Desejada: ");
	scanf("%d",&Operacao);
	
	

       	switch(Operacao){
	   	case 1://maior e menor	
				Maior = Numero[0];
				Menor = Numero[0];
	
				for(int i =1; i < 10; i++){	
				if(Numero[i] > Maior){
			    	 Maior = Numero[i];	
				}else if(Numero[i]< Menor){
					Menor = Numero[i];
					}
				}
			    printf("\nMaior: %d\n",Maior);
				printf("Menor:  %d\n", Menor);	
				break;			
		case 2 ://soma
				for(int i = 0; i < 10; i++){
					Soma =Soma + Numero[i];
				}
				printf("Soma = %d\n",Soma);
			    break;
		case 3 ://media
				printf("Média = %d\n",Soma/10);				
			break;
		default	:
		break;
	}
	
	Retornar:
    printf("Deseja retornar?\n1 - menu\n2 - Inserir Valores\n3 - Encerrar ");									
	scanf("%d",&Retorno);
	
	if(Retorno ==1 ){
		goto Menu;
	}else if(Retorno ==2){
		goto InserirValores;
	}else if(Retorno == 3){
		goto Fim;
	}else{
		goto Retornar;
		
	}
	
	Fim:		
	return 0;
	system("pause");
}
