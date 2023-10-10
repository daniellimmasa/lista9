#include<stdio.h>


int main(){
    int valores[5], maior =0, menor=0, pMaior=0, pMenor=0;

    for(int i =0; i<5; i++){
        printf("digite os valores: ");
        scanf("%d", &valores[i]);

    }
    maior = valores[0];
    menor = valores[0];

    for(int i =0; i<5; i++){
        if (valores[i]> maior){
            maior = valores[i];
            pMaior=i;


        }if (valores[i]< menor){
            menor = valores[i];
            pMenor=i;

 }


}
printf("pmaior: %d \n pmenor: %d", pMaior, pMenor);
}