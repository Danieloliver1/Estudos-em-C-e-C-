/*Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
enderec¸o de cada posic¸ao desse array. ˜
*/
 
 int main (){
 	
 	int i;
 	float *ponteiro;
 	float vet[10]={1.2,5.0,1.1,1.4,6.2,4.1,4.3,4.0,3.2,3.2};
 	
 	
 	for(i= 0; i<10; i++){
 		ponteiro = &vet[i];
 		printf("\nvet[%d] = %c  ponteiro = %x", i, vet[i], ponteiro); // o conteudo do vetor acessado pela variavel e pelo ponteiro
  		ponteiro++;
	 }	
 	
 	
 	
 	return 0;
 }
