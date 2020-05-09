/*Faça um programa para calcular o Máximo Divisor Comum entre 2 números. Observe as
seguintes propriedades do MDC:
MDC(x, y) = MDC(x − y, y), se x > y;
MDC(x, y) = MDC(y, x);
MDC(x, x) = x.
Exemplo: MDC(3,5)=MDC(5,3)=MDC(2,3)=MDC(3,2)=MDC(1,2)=MDC(2,1)=MDC(1,1)=1*/
#include<stdio.h>
int main(){
    int x, y;
    printf("Digite dois numeros x e y para calcular o maximo divisor comum entre eles: ");
    scanf("%d %d", &x, &y);

    while(x != y){
        if(x > y){
            x = x - y;
        }
        else if (y > x){
            y = y - x;
        }
    }
    if(x = y){
        printf("MDC (x , y) = %d\n", x);
    }
}
