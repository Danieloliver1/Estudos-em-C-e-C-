/*19. Fa�a um programa que pe�a ao usu�rio um n�mero entre 12 e 20. 
Se a pessoa digitar um n�mero diferente, 
mostrar a mensagem "entrada inv�lida" e solicitar o n�mero novamente.
Se digitar correto mostrar o n�mero digitado.*/
 
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
int vetor[8];

for (int i = 0; i<8; i++){        //system("cls");
    printf("Numero: ");
    scanf("%d", &vetor[i]); 
}
for (int i = 0; i<8; i++){    
    if(vetor[i] >= 12 && vetor[i] <= 20){
    	printf("\nNumero: %i",vetor[i]);
    
}
}

return 0;
system("pause");	
}
