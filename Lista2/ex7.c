#include<stdio.h>
int main(){
    float a, b, c, d, pf, soma;

    printf("Digite a nota das suas quatro provas a seguir: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    
    soma = a + b + c + d;
    pf = (100 - soma)/ 10;

    if(soma >= 32){
        printf("APROVADO\n");
    }
    else if (soma >= 20 && soma < 32){
        printf ("Prova final precisando de %.1f pontos\n", pf);
    }
    else{
        printf("REPROVADO\n");
    }
}
