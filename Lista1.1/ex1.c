#include<stdio.h>
int main(){
    int combustivel, litros;
    printf("Digite o codigo do combustivel e a quantidade, em litros, que foi comprado: ");
    scanf("%d %d", &combustivel, &litros);
    switch (combustivel){
    case 1:
        printf("Valor a ser pago: %.2f\n", litros*2.83);
        break;
    case 2:
        printf("Valor a ser pago: %.2f\n", litros*3.15);
        break;
    default:
        printf("Codigo do combustivel invalido\n");
        break;
    }
}