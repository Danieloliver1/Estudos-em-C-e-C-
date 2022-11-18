//Soma de dois números
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
	
	soma = x1 + x2;
	printf("Resultado: %d \n", soma);
	
	system("pause");
	return 0;
}
