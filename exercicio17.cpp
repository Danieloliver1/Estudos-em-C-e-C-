//17. Calcular se um n�mero � ou n�o primo

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
	int a;
	printf ("Digite qualquer numero ");
	scanf ("%d",&a);
	
	if(a % 2 != 0){
		printf ("Numero %d primo",a);
	}
	else{
		printf("Numeo %d nao e primo",a);
	}
	return 0;
	system("pause");
}
