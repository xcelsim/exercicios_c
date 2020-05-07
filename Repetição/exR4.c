#include<stdio.h>
int main(){
    int n, valor, resultado;
    printf("Digite um valor natural n: ");
    scanf("%d", &n);
    valor = 1;
    resultado = valor*n;
     while(valor < n){
         printf("%d\n", resultado);
         valor = valor + 1;
         resultado = (valor +1)*n;

     }

}