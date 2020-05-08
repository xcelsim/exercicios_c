#include<stdio.h>
int main(){
    float xa, xb, ya, yb, p, base, altura;
    printf("Dê os valores das coordenadas (x, y) dos cantos inferior esquerdo e superior direito de um retangulo: ");
    scanf ( "%f %f %f %f", &xa, &ya, &xb, &yb);

    base = xb - xa;
    altura = yb - ya;
    p = 2*base + 2*altura;

    printf("O perímetro do retangulo mede %.2f\n", p);

}