/*Leia um conjunto de 20 valores inteiros e em seguida exiba-os
na ordem inversa do que foram digitados.*/
#include <stdio.h>

int main(){
    int vetor[20], i;
    for(i = 0; i < 20; i++){
        scanf("%d", &vetor[i]);
    }
    for(i = 19; i >= 0; i--){
        printf("%d\n", vetor[i]);
    }
}