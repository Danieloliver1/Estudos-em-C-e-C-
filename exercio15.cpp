//15. Diferenciar dentre 3 números, qual é o maior e qual é o menor


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main (){
	int a,b,c;
	
	printf ("Digite o primeiro numero: ");
	scanf ("%d",&a);
	printf ("\nDigite o segundo numero: ");
	scanf ("%d",&b);
	printf ("\nDigite o terceiro numero: ");
	scanf ("%d",&c);
	
	printf ("numero %d %d %d \n",a,b,c);
	if (a>b & a >c){
		printf ("\nMaior %d",a);		
		}else if (b>a & b >c){
		printf ("\nMaior %d",b);	
		}else if (c>a & c>b){
		printf ("\nMaior %d",c);
	}
	if (a<b & a<c){
		printf ("\nMenor %d",a);		
		}else if (b<a & b<c){
		printf ("\nMenor %d",b);	
		}else if (c<a & c<b){
		printf ("\nMenor %d",c);	
	}
	return 0;
    system("pause");
}

