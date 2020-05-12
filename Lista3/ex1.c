/*1) Você foi contratado por uma empresa de estatística para pesquisar a distâncias
registradas no medidor dos automóveis que passam por uma rodovia. O programa
deverá ler a quilometragem informada e perguntar: “Deseja realizar nova leitura
(S/N)?”. O programa deverá validar se as entradas são válidas: Não permitir
quilometragens menores ou iguais a zero e a resposta da pergunta deve ser igual a S ou
N.
Ao final da pesquisa o programa deverá informar: a quantidade de carros pesquisados,
a quilometragem total e a quantidade de dados inválidos digitados pelo usuário.*/

#include<stdio.h>
int main(){
    int km, numC, invalido, kmT;
    char newL;

    numC = 0;
    invalido = 0;
    kmT = 0;
     do{           
        printf("Digite a quilometragem do caro: ");
        scanf("%d", &km);

        if(km > 0){
            numC = numC + 1;
            kmT = kmT + km;
        }
        else{
           while(km <= 0){
           printf("Quilometragem invalida. Digite a quilometragem do carro: ");
           scanf("%d", &km);
           invalido = invalido + 1;
           kmT = kmT + km;
           }
           numC = numC + 1;
        }

        printf("Deseja realizar nova leitura? ");
        scanf(" %c", &newL);
        
        if (newL != 'S' && newL != 'N'){
            while(newL != 'S'){
            invalido = invalido + 1;
            printf("Codigo invalido. Digite o codigo novamente:  ");
            scanf(" %c", &newL);
            }
        }
    }while(newL != 'N');

    if(newL == 'N'){
        printf("Numero de carros pesquisados: %d\n", numC);
        printf("Quilometragem total: %d\n", kmT);
        printf("Dados invalidos pelo usuario: %d\n", invalido);
    }

}