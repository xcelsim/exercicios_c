/*Faça um programa que apresente um menu de opções para o cálculo das seguintes
operações entre dois números:
Adição (opção 1)
subtração (opção 2)
multiplicação (opção 3)
divisão (opção 4).
saída (opção 5)
O programa deve possibilitar ao usuário a escolha da operação desejada, a exibição do
resultado e a volta ao menu de opções. O programa só termina quando for escolhida a
opção de saída (opção 5).*/
#include<stdio.h>
int main()
{
    int a, b, r, operacao;

    printf("Digite os valores de a e b: ");
    scanf("%d %d", &a, &b);
    printf("Qual operação deseja realizar entre as variaveis?\n");
    printf("Opção 1: Adição\n");
    printf("Opção 2: Subtração\n");
    printf("Opção 3: Multiplicação\n");
    printf("Opção 4: Divisão\n");
    printf("Ou digite 5 para sair\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &operacao);

    do{
        if(operacao == 1){
            r = a + b;
            printf("a + b = %d\n", r);
        }
        else if(operacao == 2){
            r = a - b;
            printf("a - b = %d\n", r);
        }
        else if(operacao == 3){
            r = a*b;
            printf("a*b = %d\n", r);
        }
        else if(operacao == 4){
            r = a/b;
            printf("a/b = %d\n", r);
        }
        else if(operacao == 5){
            break;
        }
        printf("Qual operação deseja realizar entre as variaveis?\n");
        printf("Opção 1: Adição\n");
        printf("Opção 2: Subtração\n");
        printf("Opção 3: Multiplicação\n");
        printf("Opção 4: Divisão\n");
        printf("Ou digite 5 para sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &operacao);
    }while(operacao > 0 && operacao < 5);
}