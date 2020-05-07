#include<stdio.h>


int main () {
    int valor, notas, resto;
    printf("Digite o valor do saque: ");
    scanf("%d", &valor);
    notas = valor/100;
    resto = valor%100;
    printf("%d notas de 100, ", notas);
    notas = resto/50;
    resto %= 50;
    printf("%d notas de 50, ", notas);
    notas = resto/20;
    resto %= 20;
    printf("%d notas de 20, ", notas);
    notas = resto/10;
    resto %= 10;
    printf("%d notas de 10, ", notas);
    notas = resto/5;
    resto %= 5;
    printf("%d notas de 5, ", notas);
    notas = resto/2;
    resto %= 2;
    printf("%d notas de 2, ", notas);
    notas = resto/1;
    printf("%d notas de 1. \n", notas);

    

    return 0;
}