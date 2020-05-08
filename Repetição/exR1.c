#include<stdio.h>
int main(){
    int n, valor, soma;
    printf("Digite um numero natural n: ");
    scanf("%d", &n);
    valor = 0;
    soma = 0;
    while(valor <= n){
        printf("ode %d\n", soma);
        valor = valor + 1;
        soma = valor + soma;
    } 

}