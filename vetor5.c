#include<stdio.h>
int main(){
    int vetor[10], qtdPares=0;

    for(int i = 0; i<10; i++){
        printf("\ndigite os valores: ");
        scanf("%d", &vetor[i]);
        if(vetor[i]%2==0){
            printf("\n numero par");
            qtdPares++;

        }else{
            printf("\n numero impar");
        }

    }
    printf("\ntotal de pares:%d", qtdPares);







}