/* Escreva um programa para ler o saldo inicial de uma conta bancária. A seguir ler um
número indeterminado de pares de valores indicando respectivamente o tipo da
operação (codificado da seguinte forma: 1 – depósito; 2 – retirada; 3 – fim) e o valor.
Quando for informado para o tipo o código 3, o programa deve ser encerrado e impresso
o saldo final da conta com as seguintes mensagens: CONTA ZERADA, CONTA
ESTOURADA (se o saldo for negativo) ou CONTA POSITIVA (se o saldo for positivo). */
#include<stdio.h>
int main(){
    float saldoInicial, operacao, valorOP, saldoFinal;

    printf("Digite o saldo inicial da sua conta: ");
    scanf("%f", &saldoInicial);

    saldoFinal = saldoInicial;
    
    do{
     printf("Digite o codigo de operacao (1 – depósito; 2 – retirada; 3 – fim), juntamente do valor da operacao desejada: ");
     scanf("%f %f", &operacao, &valorOP);

     if(operacao == 1){
        saldoFinal = saldoFinal + valorOP;
     }
     else if(operacao == 2){
         saldoFinal = saldoFinal - valorOP;
     }
    
    }while(operacao != 3);

    printf("Saldo Final: %.2f\n", saldoFinal);

    if(saldoFinal < 0){
        printf("CONTA ESTOURADA\n");
    }
    else if(saldoFinal == 0){
        printf("CONTA ZERADA\n");
    }
    else{
        printf ("CONTA POSITIVA\n");
    }
}
