/*Faça um programa que leia um nome, calcule e retorne quantas
letras tem esse nome.*/
#include <stdio.h>
#include <string.h>

int main(){
    char nome[30];

    printf("Digite seu nome:\n");
    scanf("%[^\n]", nome);
    int s = strlen(nome);
    printf("O número de caracteres do nome é %d\n", s);

}