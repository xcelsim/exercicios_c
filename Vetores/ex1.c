/*Leia um conjunto de 10 notas de alunos. Calcule e exiba a
média destas notas. Em seguida exiba apenas as notas que são
maiores do que a média calculada.*/
#include <stdio.h>

int main(){
    int i;
    float vetor[10], S = 0, x = 0;
    printf("Digite a nota dos alunos: ");
    for(i = 0; i < 10; i++){
        scanf("%f", &vetor[i]);
    S = vetor[i] + S;
    }
    printf("A média das notas foi %.2f\n", S/10);
    printf("As notas acima da média foram:\n");
    for(i = 0; i < 10; i++){
        if(vetor[i] > S/10){
            printf("%.2f\n", vetor[i]);
        }
        if(vetor[i] == S/10){
            printf("Não teve nota acima da média\n");
        }
    }
}