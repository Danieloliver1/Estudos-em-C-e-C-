/*. Escreva um programa que contenha duas vari�veis inteiras. 
Leia essas vari�veis do teclado. Em seguida, compare seus endere�os e exiba
 o conte�do do maior endere�o*/
 
 
 int main (){
 	
 	int x,y,*pt1,*pt2;
 	
 	printf("Escreva um numero inteiro ");
 	scanf("%d",&x);
 	printf("Escreva um numero inteiro ");
 	scanf("%d",&y);
 	
 	
 	pt1=&x;
 	pt2=&y;
 	
 	
 	if(pt1>pt2){
 		
 		printf("O endereco x=%x e maior do que y=%x",pt1,pt2);
	 }
 	
 	
 	
 	return 0;
 }
