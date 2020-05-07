#include<stdio.h>

int main(){
    int codigo, quantidade;
    printf("Digite o codigo e a quantidade do produto consumido: ");
    scanf("%d %d", &codigo, &quantidade);
    switch (codigo){
        case 1:printf("Valor a ser pago: %.2f\n", quantidade*4.00);
        break;
        case 2:printf("Valor a ser pago: %.2f\n", quantidade*4.50);
        break;
        case 3:printf("Valor a ser pago: %.2f\n", quantidade*5.00);
        break;
        case 4:printf("Valor a ser pago: %.2f\n", quantidade*2.00);
        break;
        case 5:printf("Valor a ser pago: %.2f\n", quantidade*1.50);
        break;
        default:printf("Código invalido\n");
        break;
    }
}
