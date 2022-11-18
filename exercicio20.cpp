/* 20. Leia uma temperatura a qual o usuário irá o Valor e a escala atual:
 (Fahrenheit, Celsius, Kelvin) e informar a escala para qual deseja converter.
a. Celcius para Fahrenheit: F = C*(1,8) + 32
b. Fahrenheit para Celcius: C = (F - 32) / 1,8
c. Kelvin para Celcius: C = K – 273,15
d. Celcius para Kelvin: K = C + 273,15
e. Kelvin para Fahrenheit: F = 1,8(K-273) + 32 */

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	int valor;
	float f;
	float c;
	float k;
	
	printf("----------------MENU----------------------\n________________________________________\n");
	printf("--------------------ESCOLHA AS OPÇÕES ABAIXO--------------------------------\n");
	printf("1-Celcius para Fahrenheit\n2-Fahrenheit para Celcius\n3-Kelvin para Celcius\n4-Celcius para Kelvin\n5-Kelvin para Fahrenheit\n");
	printf("Escolha escala para qual deseja converter ");
	scanf("%d",&valor);
	
		switch(valor){
		case 1:		
				printf("a. Celcius para Fahrenheit: ");
				scanf("%f",&c);
				printf("a. Celcius para Fahrenheit: %.2f ",f=(c*1.8)+32); //F = C*(1,8) + 32
			
		    break;
		case 2:
			
				printf("b. Fahrenheit para Celcius: ");
				scanf("%f",&f);
				printf("b.Fahrenheit para Celcius: %.2f ",c=((f-32)/1.8));//C = (F - 32) / 1,8
			
			break; 
		case 3:
			
				printf("c. Kelvin para Celcius: ");
				scanf("%f",&k);
			    printf("c.Kelvin para Celcius: %.2f ",c=k-273.15);//C = K – 273,15
			break; 
		case 4:
			
				printf("d. Celcius para Kelvin: ");
				scanf("%f",&c);
			    printf("d.Celcius para Kelvin: %.2f ",k=c+273.15);//K = C + 273,15
			break;
		case 5:
			
				printf("e. Kelvin para Fahrenheit: ");
				scanf("%i",&k);
			    printf("e.Kelvin para Fahrenheit: %.2f ",f=(1.8*(k-273)+32));//F = 1,8(K-273) + 32
			break;
		default	:
		break;    
	}
	
	
	
	
	return 0;
	system("pause");
}
