#include<stdio.h>
int main(){
    float b, a, p;
    printf("Dê os valores para a base e a altura do retangulo, respectivamente: ");
    scanf("%f %f", &b, &a);
    p = 2*b + 2*a;

    printf("O perímetro mede %.2f unidades\n", p);
    
}