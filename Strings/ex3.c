/*Faça um programa que leia uma palavra e a imprima de trás para
frente.*/
#include <stdio.h>
#include <string.h>

int main(){

    int i, j;
    char nome1[50], nome2[50];
    printf("Digite um nome: ");
    scanf("%[^\n]", nome1);

    for(i = strlen(nome1) - 1, j = 0; j < strlen(nome1), i >= 0; i--, j++)
        nome2[j] = nome1[i];
    printf("%s\n", nome2);
}