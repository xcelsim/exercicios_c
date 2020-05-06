#include <stdio.h>

int main(){
    float salarioFixo1, salarioFixo2, valorDeVenda1, valorDeVenda2, salarioFinal1, salarioFinal2;
    char inicial1, inicial2;
    printf("Digite a inicial do nome, o salario e o valor de venda da pessoa 1: ");
    scanf("%c %f %f", &inicial1, &salarioFixo1, &valorDeVenda1);
    printf("Digite a inicial do nome, o salario e o valor de venda da pessoa 2: ");
    scanf(" %c %f %f", &inicial2, &salarioFixo2, &valorDeVenda2);

    salarioFinal1 = salarioFixo1 + valorDeVenda1 * 0.15;
    salarioFinal2 = salarioFixo2 + valorDeVenda2 * 0.15;

    if(salarioFinal1 > salarioFinal2){
        printf("%c tem o maior salario que é de: %.2f \n", inicial1, salarioFinal1);
    }
    else{
        printf("%c tem o maior salario que é de: %.2f \n", inicial2, salarioFinal2);

    }


}