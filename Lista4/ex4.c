/*5) Fazer um programa em C para ler um vetor de inteiros positivos de 50 posições. Imprimir
a quantidade de números primos presentes nele.*/
#include <stdio.h>

int isPrime(int n){
    int i;
    int count = 0;
    for(i = 1; i <= n; i++){
        if(n%i == 0){
            count++;
        }
    }
    if(count == 2){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int vetor[5], i;

    for(i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < 5; i++){
        if(isPrime(vetor[i])){
            printf("\n%d\n", vetor[i]);
        }
    }

}