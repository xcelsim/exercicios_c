/*Escreva uma função que receba dois valores inteiros representando, respectivamente,
 um valor de hora e um de minutos e retorne o valor equivalente em minutos.*/
#include <stdio.h>

int transformador(int n, int m){
    int min;
    min = n*60 + m;
    return min;
}
int main(){
    int horas, minutos;
    scanf("%d %d", &horas, &minutos);
    int min = transformador(horas, minutos);
    printf("O total de minutos é %d\n", min);
}