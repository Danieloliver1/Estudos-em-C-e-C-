//Faça um programa que leia 4 inteiros e imprima sua média.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	int x1, x2,x3,x4, media;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o primeiro número: ");
	scanf("%d",&x1);
	printf("Digite o segundo número: ");
	scanf("%d",&x2);
	printf("Digite o terceiro número: ");
	scanf("%d",&x3);
	printf("Digite o quarto número: ");
	scanf("%d",&x4);
	 
	media = (x1+x2+x3+x4)/4;
	
	printf("Resultado da soma: %d", media);
	
}
