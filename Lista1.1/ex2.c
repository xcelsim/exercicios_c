#include<stdio.h>
int main(){
    int idade, doenca;
    printf("Informe sua idade e o numero de doencas cronicas que possui: ");
    scanf("%d %d", &idade, &doenca);

    if (idade <= 18){
        printf("O valor total da mensalidade e: %.2f\n", 83.15);
    }
    else if (idade >= 19 && idade <= 33 ){
        printf("O valor total da mensalidade e: %.2f\n", 133.88 + 133.88*(0.05*doenca));
    
    }
    else if(idade >= 34 && idade <=44){
        printf("O valor total da mensalidade e: %.2f\n", 203.73 + 203.73*(0.10*doenca));
    }
    else if(idade >= 45 && idade <= 58){
        printf("O valor total da mensalidade e: %.2f\n", 312.44 + 312.44*(0.15*doenca));
    }
    else{
        printf("O valor total da mensalidade e: %.2f\n", 498.53 + 498.53*(0.30*doenca));
    }
}