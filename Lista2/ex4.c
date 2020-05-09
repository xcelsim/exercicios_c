#include<stdio.h>
int main(){
    int n, a, b, f, aux;
    printf("digite um numero n: ");
    scanf("%d", &n);

    a = 0;
    b = 1;

    printf("%d\n", b);
    for(f = 0; f < n; f ++){
        aux = a + b;
        a = b;
        b = aux; 
        printf("%d\n", aux);
    }
}