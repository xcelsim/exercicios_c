#include<stdio.h>
int main(){
    float a, b;
    printf("Digite dois valores a e b: ");
    scanf("%f %f", &a, &b);
    while(a != b){
        if(a < b){
            printf("crescente\n");
            printf("Digite dois valores a e b:");
            scanf("%f %f", &a, &b);
        }
        else{
            printf("decrescente\n");
            printf("Digite dois valores a e b:");
            scanf("%f %f", &a, &b);
        }
        
        }
    }
