// Fa�a um algoritmo para somar dois n�meros e multiplicar o resultado pelo primeiro n�mero.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


int main(){
 
    setlocale(LC_ALL, "Portuguese");
    
    int x1, x2, soma, mult;
    
    printf("\t ***A soma de dois n�meros*** \n");
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &x1); 
    printf("Digite o segundo valor: ");
    scanf("%d", &x2);
    
    soma = x1 + x2;
    mult = soma * x1;
    printf("Resultado de dois n�meros e multiplicado o resultado pelo primeiro n�mero: %d \n", mult);
    
    system("pause");
    return 0;
}
