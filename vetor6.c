#include<stdio.h>
int main(){
    int vetor[10], maior =0, menor=0, Posmaior=0, Posmenor=0;

    for(int i =0; i<10; i++){
        printf("\n digite os valores: ");
        scanf("%d", &vetor[i]);

    }
    
    maior= vetor[0];
    menor= vetor[0];

    for (int i=0; i <10; i++){
        if(vetor[i]> maior){
            maior = vetor[i];
            Posmaior =i;
        
        }
        if(vetor[i] < menor){
            menor= vetor[i];
            Posmenor=i;
        
        }
        
    }
    printf("maior: %d posicao :%d menor:%d posicao: %d", maior, Posmaior, menor, Posmenor);







}