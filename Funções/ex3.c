//Escreva uma função que receba 3 números inteiros e retorne a sua média aritmética.//
#include <stdio.h>
float media(float n, float m, float o){
    float a;
    a = (n + m + o)/3;
    return a;
}
int main(){
    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);
    float a = media(x, y, z);
    printf("A média dos números é %.2f\n", a);
}