#include<stdio.h>
int main(){
    int jogos, golF, golV, newG, vitoriasF, vitoriasV, empates;
    jogos = 0;
    vitoriasV = 0;
    vitoriasF = 0;
    empates = 0;
    jogos = 0;

    do{
        printf("Digite o numero de gols do Flamengo e o numero de gols do vasco, respectivamente: ");
        scanf("%d %d", &golF, &golV);

        if (golF > golV){
            printf("O Flamengo venceu\n");
            vitoriasF = vitoriasF + 1;

        }
        else if(golV > golF){
            printf("O Vasco venceu\n");
            vitoriasV = vitoriasV + 1;
        }
        else{
            printf("Empate\n");
            empates = empates + 1;
        }
        
        jogos = jogos + 1;

        printf("Jogar novamente? ");
        scanf("%d", &newG);
    }while(newG == 1);
    
    
    printf("Numero de jogos: %d\n", jogos);
    printf("Vitorias do Flamengo: %d\n", vitoriasF);
    printf("Vitorias do Vasco: %d\n", vitoriasV);
    printf("Numero de empates: %d\n", empates);

    if(vitoriasF > vitoriasV){
        printf("O Flamengo é campeão.\n");
    }
    else if(vitoriasF < vitoriasV){
        printf("O Vasco é campeão\n");
    }
    else{
        printf("Não houve campeão\n");
    }
    
    
}