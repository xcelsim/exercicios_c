/*3) Utilizando switch case, faça um programa que contenha um menu com as seguintes
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
    char S1[21], S2[21], S3[50], C1, C2, k, novoComando, substring[21];
    int i, j, t, comando, dif, p;

    printf("Digite uma string S1: ");
    scanf(" %[^\n]", S1);
    do{ 
        do{
            printf("Digite um número que corresponde ao comando desejado: \n");
            printf("1. Imprimir o tamanho da string S1.\n");
            printf("2. Comparar a string S1 com uma string S2.\n");
            printf("3. Concatenar a string S1 com uma string S2 e imprimir na tela o resultado.\n");
            printf("4. Imprimir a string S1 de forma reversa.\n");
            printf("5. Contar quantas vezes um caractere aparece na string S1.\n");
            printf("6. Retornar a substring da string S1.\n");
            printf("7. Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2.\n");
            scanf("%d", &comando);

            if(comando != 1 && comando != 2 && comando != 3 && comando != 4 && comando != 5 && comando != 6 && comando != 7){
                do{
                    printf("\nComando inválido.\n")   ; 
                    printf("\nDigite um número que corresponde ao comando desejado: \n");
                    printf("1. Imprimir o tamanho da string S1.\n");
                    printf("2. Comparar a string S1 com uma string S2.n");
                    printf("3. Concatenar a string S1 com uma string S2 e imprimir na tela o resultado.\n");
                    printf("4. Imprimir a string S1 de forma reversa.\n");
                    printf("5. Contar quantas vezes um caractere aparece na string S1.\n");
                    printf("6. Retornar a substring da string S1.\n");
                    printf("7. Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2.\n");
                    scanf("%d", &comando);
                }while(comando != 1 && comando != 2 && comando != 3 && comando != 4 && comando != 5 && comando != 6 && comando != 7);
            }   
    

            switch(comando){
                case 1:
                    printf("\nImprimir o tamanho da string S1.\n");
                    t = strlen(S1);
                    printf("O tamanho da string é %d.\n", t);
                    break;

                case 2:
                    printf("\nComparar a string S1 com uma string S2.\n");
                    printf("Digite uma string S2.\n");
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

                case 3:
                    strcpy(S3, S1);
                    printf("\nConcatenar a string S1 com uma string S2.\n");
                    printf("Digite a string S2.\n");
                    scanf(" %[^\n]", S2);
                    strcat(S1, S2);
                    printf("%s\n", S1);
                    strcpy(S1, S3);
                    break;

                case 4:
                    printf("\nImprimir a string de forma reversa.");
                    for(i = strlen(S1) - 1, j = 0; i >= 0, j <= strlen(S1); i--, j++)
                    S3[i] = S1[j];
                    printf("%s\n", S3);
                    break;

                case 5:
                    printf("\nContar quantas vezes um caractere aparece na string S1.\n");
                    printf("Digite um caractere para ver quantas vezes ele aparece na string.\n");
                    scanf(" %c", &k);
                    j = 0;
                    for(i = 0; i <= strlen(S1); i++){
                        if(S1[i] == k){
                            j++;    
                        }
                    }
                    printf("O caractere %c repete %d vezes na string.\n", k, j);
                    break;

                case 6:
                    printf("\nRetornar a substring da string S1.\n");
                    printf("Informe a partir de qual posição a substring deve ser criada.\n");
                    scanf("%d", &p);
                    printf("Agora informe o tamanho da substring.\n");
                    scanf("%d", &t);
                    for(i = p, j = 0; i <= t + (p - 1), j <= t - 1; i++, j++)
                    substring[j] = S1[i];
                    printf("%s", substring);
                    break;
                
                case 7:
                    strcpy(S3, S1);
                    printf("\nSubstituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2.\n");
                    printf("Informe o caractere que deseja substituir em sua primeira ocorrência.\n");
                    scanf(" %c", &C1);
                    printf("Agora informe o caractere C2 que substituirá o C1 em sua primeira ocorrência.\n");
                    scanf(" %c", &C2);                    
                    for(i = 0; i <= strlen(S1); i++){
                        if(S1[i] == C1){
                            S1[i] = C2;
                            break;
                        }
                    }
                    printf("A nova string é %s.\n", S1);
                    strcpy(S1, S3);
                    break;
            }
        }   
        printf("\nDeseja fazer outra ação?\n" "s. Sim ou n. Não\n");
        scanf(" %c", &novoComando);

        if(novoComando != 's' && novoComando != 'S' && novoComando != 'n' && novoComando != 'n'){
            do{
                printf("\nResposta inválida, digite-a novamente.\n");
                scanf(" %c", &novoComando);
            }while(novoComando != 's' && novoComando != 'S' && novoComando != 'n' && novoComando != 'n');       
        }
                
    }while(novoComando != 'n' && novoComando != 'N');

}