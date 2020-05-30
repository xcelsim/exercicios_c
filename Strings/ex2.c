/*Faça um programa que leia um nome e imprima o nome somente
se a primeira letra do nome for ”a”(maiúscula ou minúscula).*/
#include <stdio.h>
#include <string.h>

int main(){

    char nome[30];
    printf("Digite seu nome:\n");
    scanf("%[^\n]", nome);   
    if(nome[0] == 'a' || nome[0] == 'A')
    printf("%s\n", nome);
    
}