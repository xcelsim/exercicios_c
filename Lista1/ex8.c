#include<stdio.h>
#include<math.h>

    int main(){
        float a, b, c, delta, R1, R2;
        printf("Digite o valor de a: ");
        scanf("%f", &a);
        printf("Digite o valor de b: ");
        scanf("%f", &b);
        printf("Digite o valor de c: ");
        scanf("%f", &c);
        delta = (b*b) - (4*(a)*(c));
        R1 = (-b + sqrt(delta))/(2*a);
        R2 = (-b - sqrt(delta))/(2*a);
        printf("R1 = %.1f e R2 = %.1f\n", R1, R2);
    }