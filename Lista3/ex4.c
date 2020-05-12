/* Ler um conjunto de 10 pares de dados, cada um, com a altura e um código para
masculino (1) e outro para feminino (2) de uma turma de alunos. Calcular e escrever
a) A maior e a menor altura da turma.
b) A média da altura das mulheres.
c) A média da altura dos homens*/

#include<stdio.h>
int main(){
    float altura, mediaM, mediaH, alturaH, alturaM, alturaMaior, alturaMenor;
    int genero, i, h, m;

    altura = 0;
    h = 0;
    m = 0;
    alturaH = 0;
    alturaM = 0;
    alturaMenor = 30;

    printf("Digite seu genero e a sua altura ");
    scanf("%d %f", &genero, &altura);
    if(genero == 1){
        h = h + 1;
        alturaH = alturaH + altura;
    }
    else if(genero == 2){
        m = m + 1;
        alturaM = alturaM + altura;
    }
    
    for (i = 1; i < 10; i++){
     printf("Digite seu genero e a sua altura ");
     scanf("%d %f", &genero, &altura);
     
     if(genero == 1){
        h = h + 1;
        alturaH = alturaH + altura;
     }
     else if(genero == 2){
        m = m + 1;
        alturaM = alturaM + altura;
     }
     if(alturaMaior < altura){
         alturaMaior = altura;
     }
     else if(alturaMenor > altura){
         alturaMenor = altura;         
     }
    }
    mediaH = alturaH/h;
    mediaM = alturaM/m;

    printf("A maior altura da turma é %.2f\nA menor altura da turma é %.2f\n", alturaMaior, alturaMenor);
    printf("A altura media masculina é %.2f\n", mediaH);
    printf("A altura media feminina é %.2f\n", mediaM);
}