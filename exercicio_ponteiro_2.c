/*2. Escreva um programa que contenha duas variáveis inteiras.
 Compare seus endereços e ´
exiba o maior endereço.*/


int main (){
	
	int x, y;
	
	x=12;
	y=13;
	
	int *t,*w;
	
	t=x;
	w=y;
	
	printf("O endereco de x e %x\n",&t);
	printf("O endereco de y e %x",&w);
	
	
	
	return 0;
}
