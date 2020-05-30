/*Leia dois conjuntos de 10 números cada. Exiba a intersecção
dos conjuntos, ou seja, os números que são repetidos nos dois
conjuntos.*/
#include<stdio.h>

int main(){
    int vetor1[10], vetor2[10], i, j;
    for(i = 0; i < 10; i++){
        scanf("%d", &vetor1[i]);
    }
    for(j = 0; j < 10; j++){
        scanf("%d", &vetor2[j]);    
    }
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(vetor1[i] == vetor2[j]){
                printf("%d\n", vetor1[i]);
            }
        }
    }

}
