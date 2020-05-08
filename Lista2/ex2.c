#include<stdio.h>
int main(){
    char a, b;
    int caracteres;
    printf("Digite duas letras do alfabeto: " );
    scanf("%c %c", &a, &b);

    caracteres = (b - a) - 1;

    printf("O numero de caracteres existentes entre eles são: %d\n", caracteres);
    
}