//exercio 10 - Escreva um programa que leia 2 números e escreva o menor valor lido e o maior valor lido

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int x1, x2, soma;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o primeiro número: ");
	scanf("%d",&x1);
	printf("Digite o segundo número: ");
	scanf("%d",&x2);
	
	if (x1 < x2){
	printf("Menor valor %d \n",x1);
	printf("Maior valor %d",x2);	
		}else if (x1 > x2){
	 		 printf("Maior valor %d \n",x1);
		     printf("Menor valor %d",x2); 	
			}else if(x1 = x2){
					printf("Os valores são iguais %d = %d", x1,x2);
	}
}
