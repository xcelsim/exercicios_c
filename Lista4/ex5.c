/*6) Leia dois vetores inteiros X e Y, cada um com 5 elementos (assuma que o usuário não
informa elementos repetidos). Utilizando a estrutura switch case, faça:
S. Soma entre cada elemento de X com o elemento da mesma posição Y.
P. Produto entre cada elemento de X com o elemento da mesma posição Y.
M. Subtração entre cada elemento de X com o elemento da mesma posição e Y.
I. Interseção entre X e Y.
D. Elementos diferentes entre X Y.
O programa só deve parar de executar ao ser digitado a letra Z.*/

#include <stdio.h>

int pertence(int n, int vetor[], int m){
    
    for(int i = 0; i < m; i++){
        if(n == vetor[i]){
            return 1;
        }        
    }
    return 0;

}

int main(){
    char comando, novoComando;
    int vetX[5], vetY[5], vetI[5], vetD[5], i, j, fazTudo;

        printf("Informe os elementos do vetor X, sem usar um elemento mais de uma vez.\n");
    for(i = 0; i < 5; i++){
        scanf("%d", &vetX[i]);
    }
        printf("Informe os elementos do vetor Y, sem usar um elemento mais de uma vez.\n");
    for(i = 0; i < 5; i++){
        scanf("%d", &vetY[i]);
    }

    printf("Agora digite a letra, em maiúsculo, correspondente ao comando desejado.\n"
    "S. Soma entre cada elemento de X com o elemento da mesma posição Y.\n"
    "P. Produto entre cada elemento de X com o elemento da mesma posição Y.\n"
    "M. Subtração entre cada elemento de X com o elemento da mesma posição e Y.\n"
    "I. Interseão entre X e Y.\n"
    "D. Elementos diferentes entre X e Y.\n"
    "Z. Encerrar.\n");
    scanf(" %c", &comando);
    
    do{  

        switch (comando){
            case 'S': 
                printf("\nSoma entre cada elemento de X com o elemento da mesma posição Y");

                for(i = 0; i < 5; i++){
                    fazTudo = vetX[i] + vetY[i];
                    printf("A soma dos elementos de X e Y na posição %d é %d\n", i, fazTudo);
                }
            break;

            case 'P':
                printf("\nProduto entre cada elemento de X com o elemento da mesma posição Y.\n");
                for(i = 0; i < 5; i++){
                    fazTudo = vetX[i] * vetY[i];
                    printf("O produto de cada elemento de X e Y na posição %d é %d\n", i, fazTudo);
                }
            break;
            
            case 'M':
                printf("\nSubtração entre cada elemento de X com o elemento da mesma posição e Y.\n");
                for(i = 0; i < 5; i++){
                    fazTudo = vetX[i] - vetY[i];
                    printf("O produto de cada elemento de X e Y na posição %d é %d\n", i, fazTudo);
                }
            break;
            
            case 'I':
                printf("\nInterseão entre X e Y.\n");
                printf("X ∩ Y = { ");
                for(i = 0; i < 5; i++){
                    for(j = 0; j < 5; j++){
                        if(vetX[i] == vetY[j]){
                            printf("%d ", vetY[j]);
                        }
                    }
                }
                printf("}\n");
            break;


            case 'D':
                printf("\nDiferença entre X e Y.\n");
                printf("X - Y = { ");
                for(i = 0; i < 5; i++){
                    if(!pertence(vetX[i], vetY, 5)){
                        printf("%d ", vetX[i]);
                    }
                }
                
                printf("}\n");
            break;

            

        }

        printf("\nDigite a letra, em maiúsculo, correspondente ao comando desejado.\n"
        "S. Soma entre cada elemento de X com o elemento da mesma posição Y.\n"
        "P. Produto entre cada elemento de X com o elemento da mesma posição Y.\n"
        "M. Subtração entre cada elemento de X com o elemento da mesma posição e Y.\n"
        "I. Interseão entre X e Y.\n"
        "D. Elementos diferentes entre X e Y.\n"
        "Z. Encerrar.\n");
        scanf(" %c", &comando);


    }while(comando != 'Z' && comando != 'z');


}