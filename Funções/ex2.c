//2. Escreva uma função que receba 2 números inteiros e retorne o seu produto.//
#include <stdio.h>

int multiplicador(int n, int m){
    int z = n * m;
    return z;
}
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int z = multiplicador(x, y);
    printf("O resultado da multiplicação é %d\n", z);
}