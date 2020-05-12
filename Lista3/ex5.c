/*Ler um número indeterminado de pares de valores. Cada par representa a idade de um
aluno e sua respectiva nota. Calcular e escrever:
A idade do aluno que obteve a maior nota.
A nota do aluno mais velho.
Obs.: o algoritmo será encerrado imediatamente após o usuário fornecer uma nota
negativa (sem fornecer a respectiva nota).*/
#include<stdio.h>
int main(){
    int i, idadeMaiorNota, maiorNota;
    int n, notaMaiorIdade, maiorIdade;

    maiorNota = 0;
    maiorIdade = 0;

    printf("Digite a sua idade e a sua nota a seguir: ");
    scanf("%d %d", &i, &n);

    do{
        if(i > maiorIdade){
            maiorIdade = i;
            notaMaiorIdade = n;
        }
        else if(n > maiorNota){
            maiorNota = n;
            idadeMaiorNota = i;
        }
        printf("Digite a sua idade e a sua nota a seguir: ");
        scanf("%d %d", &i, &n);
    }while(n > 0);

    if(n < 0){
        printf("A idade do aluno que obteve maior nota é %d\n", idadeMaiorNota);
        printf("A nota do aluno mais velho é %d\n", notaMaiorIdade);
    }

}