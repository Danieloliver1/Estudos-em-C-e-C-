//18. Informar se um n�mero inteiro est� ou n�o dentro de um intervalo de 2 n�mero digitado
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
		printf("O valor n�o est� Intervalo!!");
	}
	
	return 0;
	system("pause");
	}
	
  	
  	
  
