#include<stdio.h>

int main(){

    int vetor[8], soma;
    int x,y;

    for(int i=0; i <8; i++){
        printf("\ndigite o numero em vetor[%d] ",i);
        scanf("%d", &vetor[i]);
    
    }
    
    do{
    printf("\ndigite o valor de x (0 - 7): ");
    scanf("%d", &x);
    printf("\ndigite o valor de y(0 - 7): ");
    scanf("%d", &y);
    if(x<0 || x>7 && y<0 || y>7){
        printf("indice invalido");


    }


    }while(x<0 || x>7 && y<0 || y>7);
    
    soma= vetor[x] + vetor[y];

    printf("soma do indice [%d] + indice[%d]= %d", x,y,soma);

    





}