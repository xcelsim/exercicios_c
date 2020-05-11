/*Escreva um programa para ler dois valore inteiros e imprimir o resultado da divisão do
primeiro pelo segundo. Se o segundo valor informado for ZERO, deve ser impressa a
mensagem VALOR INVÁLIDO e lido um novo valor. Ao final do programa deve ser
impressa a seguinte mensagem: DESEJA REALIZAR OUTRO CÁLCULO (S/N)?
Se a resposta for S o programa deverá retornar ao começo, caso contrário deverá
encerrar a sua execução imprimindo quantos cálculos foram feitos */
#include<stdio.h>
int main(){
    float A, B, resultado;
    int numCalculos;
    char newC;

    /* A=divisor
       B=dividendo */
    
    numCalculos = 0;

    do{

    printf("Digite o divisor e o dividendo, respectivamente: ");
    scanf("%f %f", &A, &B);

    numCalculos = numCalculos + 1;

    if(B == 0){
        printf("VALOR INVALIDO. Digite um novo valor: ");
        scanf("%f", &B);
    }

    resultado = A/B;
    printf("Resultado = %.1f\n", resultado);

    printf("DESEJA REALIZAR OUTRO CALCULO? ");
    scanf(" %c", &newC);

    if(newC != 'S' && newC != 'N'){
        while(newC != 'S'){
        printf("CODIGO INVALIDO. DESEJA REALIZAR OUTRO CALCULO? ");
        scanf(" %c", &newC);
        }
    }
    
    }while(newC != 'N');

    if(newC == 'N'){
    printf("Foi(foram) realizado(s) %d calculo(s)\n", numCalculos);
    }

}