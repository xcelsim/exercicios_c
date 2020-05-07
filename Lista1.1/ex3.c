#include<stdio.h>
int main(){
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade >= 5 && idade <= 10){
        printf("Voce se enquadra na categoria infantil\n");
    }
    else if(idade >= 11 && idade <= 17){
        printf("Voce se enquadra na categoria juvenil\n");
    }
    else if(idade >= 18 && idade <= 30){
        printf("Voce se enquadra na categoria profissional\n");
    }
    else{
        printf("Voce se enquadra na categoria senior\n");
    }

}