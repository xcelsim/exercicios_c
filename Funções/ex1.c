//Escreva uma função que receba um número inteiro e retorne o seu antecessor.//
#include <stdio.h>

int subtraiUm(int n){
    int x;
    x = n - 1;
    return x;

}
int main(){
    int y;
    scanf("%d", &y);
    int x = subtraiUm(y);
    printf("O numero antecessor de %d é %d\n", y, x);
}