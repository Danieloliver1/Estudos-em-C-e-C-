//Diferenciar dentre 3 n�meros, qual � o maior e qual � o menor.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	int x1, x2,x3,maior, menor;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&x1);
	printf("Digite o segundo n�mero: ");
	scanf("%d",&x2);
	printf("Digite o terceiro n�mero: ");
	scanf("%d",&x3);
	 
	 if (x1 > x2 && x1 > x3){
	printf("Maior valor %d",x1);	
	}if (x2 > x1 && x2 > x3){
	printf("Maior valor %d \n",x2);
	}if (x3 > x1 && x3 > x2){
	printf("Maior valor %d \n",x3);
	}if (x1 < x2 && x1 < x3){
	printf("Menor valor %d \n",x1);
	}if (x2 < x1 && x2 < x3){
	printf("Menor valor %d \n",x2);
	}if (x3 < x1 && x3 < x2){
	printf("Menor valor %d \n",x3);	  	  	  	
	}if(x1 == x2 || x2 == x3){
	printf("Os valores s�o iguais!");
	}
	
	//printf("Resultado da soma: %d", soma);
	
}
