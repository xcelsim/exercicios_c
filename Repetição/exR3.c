#include<stdio.h>
int main(){
    int a, b, n;
    printf("De o valor de dois extremos a e b: ");
    scanf("%d %d", &a, &b);
    n=a;
    while(n <= b){
        if (n%2==0){
         printf("%d\n", n);
           n += 2;
        }
        else{
         n+=1;
        }
    }
}