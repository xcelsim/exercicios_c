#include <stdio.h>

int main(){
    int numero1, numero2, numero3, numero4, numero5;

    printf("A seguir, digite cinco numeros diferentes: ");
    scanf("%d %d %d %d %d", &numero1, &numero2, &numero3, &numero4, &numero5);

    if(numero1 > numero2 && numero1 > numero3 && numero1 > numero4 && numero1 > numero5){
        printf("%d é o maior numero\n", numero1);
    }
    else if(numero2 > numero1 && numero2 > numero3 && numero2 > numero4 && numero2 > numero5){
        printf("%d é o maior numero\n", numero2);
    }
    else if(numero3 > numero1 && numero3 > numero2 && numero3 > numero4 && numero3 > numero5){
        printf("%d é o maior numero\n", numero3);
    }
    else if(numero4 > numero1 && numero4 > numero2 && numero4 > numero3 && numero4 > numero5){
        printf("%d é o maior numero\n", numero4);
    }
    else{
        printf("%d é o maior numero\n", numero5);
    }
}