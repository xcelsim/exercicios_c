#include <stdio.h>
#include <math.h>


int main(){
    int xa, xb, ya, yb;
    float dAB;
    printf("Escreva a coordenada do ponto A: ");
    scanf("%d %d", &xa, &ya);
    printf("Escreva a coordenada do ponto B: ");
    scanf("%d %d", &xb, &yb);

    dAB = sqrt( pow( (xb - xa),2 ) + pow( (yb - ya),2 ) );
    
    printf("A distancia entre os pontos A e B é igual a: %f\n", dAB);
}