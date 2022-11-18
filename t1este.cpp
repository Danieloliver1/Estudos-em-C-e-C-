#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



int main(){
    setlocale(LC_ALL,"portuguese");
    
    int Numero[10], Soma = 0, Maior = 0, Menor = 0, Retorno;
    
    //Ler Vetor
    InserirValores:
    for(int i = 0; i < 10; i++){
        //system("cls");
        printf("Número[%d]: ",i+1);
        scanf("%d", &Numero[i]);    
    }
    
    //Escrever Vetor
    printf("Lista de Números:");
    for(int i = 0; i < 10; i++){
        printf(" %d", Numero[i]);
    }
    
    Menu:
    int Operacao;
    printf("\n\n1 - Maior e Menor\n2 - Soma\n3- Média\n");
    printf("Operação Desejada: ");
    scanf("%d", &Operacao);
    
    switch(Operacao){
        case 1: //Maior e Menor                
                Maior = Numero[0];
                Menor = Numero[0];
                
                for(int i = 1; i < 10; i++){
                    if(Numero[i] > Maior){
                        Maior = Numero[i];
                    }else if(Numero[i] < Menor){
                        Menor = Numero[i];
                    }
                }
                
                printf("\nMaior: %d\n", Maior);
                printf("Menor: %d\n", Menor);    
            break;
        case 2: // Soma
                Soma = 0;
                for(int i = 0; i < 10; i++){
                    Soma = Soma + Numero[i];
                }
                printf("Soma = %d", Soma);
            break;
        case 3:
                Soma = 0;
                for(int i = 0; i < 10; i++){
                    Soma = Soma + Numero[i];
                }
                printf("Média = %d", Soma/10);
            break;
        default:
        break;
    }
    
    Retornar:
    printf("Deseja retornar?\n1 - Menu\n2 - Inserir Valores\n3 - Encerrar ");
    scanf("%d", &Retorno);
    
    if(Retorno == 1){
        goto Menu;
    }else if(Retorno == 2){
        goto InserirValores;
    }else if(Retorno == 3){
        goto Fim;
    }else{
        goto Retornar;
    }
    
    Fim:
    return 0;
    system("pause");
}
