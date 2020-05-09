#include<stdio.h>
int main(){
    int a;
    printf("Digite um valor: ");
    scanf("%d", &a);
    
    while(a>0){
        if (a%2 == 0 && a%5 == 0){
            printf("1 e 2\n");
        }
        else if(a%2 == 0 && a%7 == 0){
            printf("1 e 2\n");
        }
        else if(a%3 == 0 && a%5 == 0){
            printf("1 e 2\n");
        }
        else if(a%3 == 0 && a%7 == 0){
            printf("1 e 2\n");
        }
        else if(a%2 == 0 || a%3 == 0){
            printf("1\n");
        } 
        else if(a%5 == 0 || a%7 == 0){
            printf("2\n");
        }
        else
        {
            printf("0\n");
        }
        
        if(a == -1){
            break;
    }
                
    printf("Digite um valor: ");
    scanf("%d", &a);        
    }

        
}