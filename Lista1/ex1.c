#include <stdlib.h>
#include <stdio.h>
#define PI 3.14

int main() {
    float areaDoRaio;
    int raio;
    printf("Digite do valor do raio: ");
    scanf("%d" , &raio);
    areaDoRaio = raio * raio * PI;
    printf("O raio da circunferencia é igual a: %.3f \n", areaDoRaio);
    
    }