#include<stdio.h>
int main(){
    int a, b, n, soma, c;
    printf("Digite os valores de a e n, respectivamente: ");
    scanf("%d %d", &a, &n);
    b = 0;
  soma = a;
 
    if(n > 0){
     while(b < n){
     printf("%d\n", soma);
     b = b + 1;
     soma = soma + b + a;
    }
}
    else{
        printf("Digite um valor positivo para n: ");
        scanf("%d", &n);
            while(b < n){
        if(n > 0){
        printf("%d\n", soma);
        b = b + 1;
        soma = soma + b + a;
    }
        }
  }
}
  
