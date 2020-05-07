#include<stdio.h>

int main(){
    int dia, mes, ano;
    printf("Digite um numero em dias: ");
    scanf("%d", &dia);
    ano = dia/365;
    dia = dia%365;
    mes = dia/30;
    dia = dia%30;
    printf("%d ano(s), %d mes(es) e %d dia(s)\n", ano, mes, dia);
}