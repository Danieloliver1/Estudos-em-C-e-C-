/*2. Escreva um programa que contenha duas vari�veis inteiras.
 Compare seus endere�os e �
exiba o maior endere�o.*/


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
