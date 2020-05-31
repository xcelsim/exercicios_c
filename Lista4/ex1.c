/*Elabora uma função que permita somar os elementos de um vetor de inteiros.*/
#include <stdio.h>

int main(){
    int vetor[5], i, S = 0;
    for(i=0; i<5; i++){
        vetor[i] = 5 + i;
        S = vetor[i] + S;
    }
    printf("A soma dos elementos do vetor é %d.\n", S);
}