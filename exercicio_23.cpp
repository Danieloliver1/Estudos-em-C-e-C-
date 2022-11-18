/*23. Crie um programa que receba três valores (obrigatoriamente maiores que zero), representando as medidas dos três lados de um triângulo. Elabore funções para:
a. Determinar se eles lados formam um triangulo, sabendo que:
i. O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados.
b. Determinar e mostrar o tipo de triangulo, caso as medidas formem um triangulo.
i. Equilátero três lados iguais.
ii. Isósceles dois lados iguais.
iii. Escaleno três lados diferentes.*/


#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	int x,y,z;
	
	printf("\nDigite os lados do triangulo ");
	
	printf("\n1-Lado- ");
	scanf("%i",&x);
	printf("\n2-Lado- ");
	scanf("%i",&y);
	printf("\n3-Lado- ");
	scanf("%i",&z);
	
	
	if(x<=0&&y<=0&&z<=0){
	printf("\no numero tem que ser maior que zero");
	}else if(x<=0){
	printf("\no numero tem que ser maior que zero");
	printf("\n1-Lado- ");
	scanf("%i",&x);	
	}else if(y<=0){
	printf("\no numero tem que ser maior que zero");
	printf("\n2-Lado- ");
	scanf("%i",&y);	
	}else if(z<=0){
	printf("\no numero tem que ser maior que zero");
	printf("\n3-Lado- ");
	scanf("%i",&z);
	}

	printf("\n\t---tipo de triangulo---\n");

	if(x==y && x==z){
		printf("\ni Equilátero três lados iguais.");
	}else if(x==y || x==z){
		printf("\nii Isósceles dois lados iguais.");
	}else if(x!=y&&x!=z){
		printf("\niii. Escaleno três lados diferentes.");
	}

	return 0;
}
