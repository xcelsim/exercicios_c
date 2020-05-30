/*Utilizando switch case, faça um programa que contenha um menu com as seguintes
opções:
a. Ler uma string S1 (tamanho máximo 20 caracteres);
b. Imprimir o tamanho da string S1;
c. Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir
o resultado da comparação;
d. Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado
da concatenação;
e. Imprimir a string S1 de forma reversa;
f. Contar quantas vezes um dado caractere aparece na string S1. Esse caractere
desse ser informado pelo usuário;
g. Retornar uma substring da string S1. Para isso o usuário deve informar a partir
de qual posição deve ser criada a substring e qual é o tamanho da substring.
h. Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2.
Os caracteres C1 e C2 serão lidos pelo usuário;*/
#include <stdio.h>
#include <string.h>

int main(){
    char S1[21], S2[21], C1, C2, k, novoComando;;
    int i, j, t, comando, dif;

    printf("Digite uma string S1: ");
    scanf(" %[^\n]", S1);
    do{    
    printf("Digite um número que corresponde ao comando desejado: \n");
    printf("1. Imprimir o tamanho da string S1\n");
    printf("2. Comparar a string S1 com uma string S2\n");
    printf("3. Concatenar a string S1 com uma string S2 e imprimir na tela o resultado\n");
    printf("4. Imprimir a string S1 de forma reversa\n");
    printf("5. Contar quantas vezes um caractere aparece na string S1\n");
    printf("6. Retornar a substring da string S1\n");
    printf("7. Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2\n");
    scanf("%d", &comando);

    /*fazer um if para se o comando for diferente dos listados*/
    
        switch(comando){
            case 1:
                printf("Imprimir o tamanho da string S1\n");
                t = strlen(S1);
                printf("O tamanho da string é %d\n", t);
                break;
            case 2:
                printf("Comparar a string S1 com uma string S2\n");
                printf("Digite uma string S2\n");
                scanf(" %[^\n]", S2);
                dif = strcmp(S1, S2);
                printf("A diferença é igual a %d.\n", dif);
                if(dif < 0){
                    printf("A string S1 é menor que a string S2.\n");
                }
                else if(dif > 0){
                    printf("A string S1 é maior que a string S2.\n");
                }
                else if(dif == 0){
                    printf("S1 é igual a S2.\n");
                }
                break;
                }
                    printf("Deseja fazer outra ação?\n" "s. Sim ou n. Não\n");
                    scanf(" %c", &novoComando);


                
    }while(novoComando == 's' || novoComando == 'S');

}