/*Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e tem como
saída o número de cada dado e a relação entre eles (>,<,=) de cada lançamento.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int d1, d2, n, i, r;
    srand(time(0));

    printf("Digite o numero de lançamentos dos dois dados: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++){
        r = rand();
        d1 = (r%6) + 1;
        r = rand();
        d2 = (r%6) + 1;

        if (d1 > d2){
            printf("%d > %d\n", d1, d2);
        }
        else if (d2 > d1){
            printf("%d < %d\n", d1, d2);
        }
        else{
            printf("%d = %d\n", d1, d2);
        }
    }   
}