//18. Informar se um número inteiro está ou não dentro de um intervalo de 2 número digitado
#include<stdio.h>
#include<stdlib.h>

  int main (){
  	
  	
  	int LimiteSuperior, LimiteInferior, Intervalo;
  	
	printf("Calculadora DE Intervalo \n");
	
	printf("Digite o Limite Superior: ");
	scanf("%d", &LimiteSuperior);
	
	printf("Digite o Limite Inferior: ");
	scanf("%d", &LimiteInferior);
	
	printf("Digite o Valor desejado: ");
	scanf("%d", &Intervalo);
	
	if((Intervalo > LimiteInferior)&&(Intervalo < LimiteSuperior)){
		printf ("O valor estar no intervalo!!");
	}else{
		printf("O valor não está Intervalo!!");
	}
	
	return 0;
	system("pause");
	}
	
  	
  	
  
