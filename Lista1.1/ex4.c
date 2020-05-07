#include<stdio.h>
int main(){
    float altura, peso;
    printf("Digite sua altura e seu peso: ");
    scanf("%f %f", &altura, &peso);

    if(altura >= 1.75 && altura <= 1.90 && (peso < 70 || peso > 90)){
        printf("RECUSADO POR PESO\n");
    }
    else if((altura > 1.90 || altura < 1.75) && peso >= 70 && peso <= 90){
        printf("RECUSADO POR ALTURA\n");
    }
    else if((altura > 1.90 || altura < 1.75) && (peso < 70 || peso > 90)){
        printf("TOTALMENTE RECUSADO\n");
    }
    else{
        printf("APROVADO\n");
    }
}