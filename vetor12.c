#include<stdio.h>


int main(){
    int valores[5], maior =0, menor=0, soma, media;

    for(int i =0; i<5; i++){
        printf("digite os valores: ");
        scanf("%d", &valores[i]);

    }
    maior = valores[0];
    menor = valores[0];

    for(int i=0; i<5 ; i++){
        printf("\n valores[%d]= %d", i, valores[i]);
        if (valores[i] > maior){
            maior = valores[i];
        }
        if (valores[i] < menor){
            menor = valores[i];
        } soma =+ valores[i];

    }
    media = soma/5;

    printf("maior valor: %d.\n menor valor: %d. \n media : %d", maior, menor, media);






}