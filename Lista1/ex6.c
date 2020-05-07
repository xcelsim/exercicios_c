#include<stdio.h>

int main(){
    int horas, minutos, segundos, valor;
    printf("Digite um numero em segundos: ");
    scanf("%d", &valor);
    minutos = valor/60;
    horas = minutos/60;
    minutos = minutos%60;
    segundos = valor%60;
    printf("%d: %d: %d\n", horas, minutos, segundos);


}