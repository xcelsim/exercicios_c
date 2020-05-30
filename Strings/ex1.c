/*Faça um programa que leia um nome, calcule e retorne quantas
letras tem esse nome.*/
#include <stdio.h>
#include <string.h>

int main(){
    int i, s = 0;
    char nome[30];
    printf("Digite um nome: ");
    scanf("%[^\n]", nome);
    for (i = 0; i < strlen(nome); i++)
        if(nome[i] >= 'a' && nome[i] <= 'z' || nome[i] >= 'A' && nome[i] <= 'Z')
            s++;    
    printf("O número de letras do nome é %d\n", s);
}