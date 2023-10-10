#include<stdio.h>


int main(){
    int numeros[10],qtdNegativos =0,somaPositivos;

    for(int i =0;i <10;i++){
        printf("digite os valores: ");
        scanf("%d", &numeros[i]);
        if(numeros[i]< 0){
            qtdNegativos++;

        }else{
            somaPositivos += numeros[i];

        }



    }
    printf("quantidade de negativos : %d. \n Soma dos positivos: %d", qtdNegativos, somaPositivos);






}