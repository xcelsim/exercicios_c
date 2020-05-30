//Escreva uma função que receba 2 números inteiros, 2 números reais indicando pesos, e retorne a média ponderada.
#include <stdio.h>

float mediaPonderada(float p1, float p2, int n, int m){
    float mp;
    mp = (p1*n + p2*m)/(p1 + p2);
    return mp;
}
int main(){
    int nota1, nota2;
    float peso1, peso2;
    scanf("%d %f %d %f", &nota1, &peso1, &nota2, &peso2);
    float mp = mediaPonderada( peso1, peso2, nota1, nota2);
    printf("A media ponderada das notas é %.2f\n", mp);
}