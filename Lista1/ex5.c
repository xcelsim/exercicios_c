#include<stdio.h>

int main(){
    int valorDoSaque;
    int numero100, numero50, numero20, numero10, numero5, numero2, numero1;
    int a, b, c, d, e, f;

    printf("Digite o valor do saque: ");
    scanf("%d", &valorDoSaque);

    if(valorDoSaque >= 100){
        a = valorDoSaque%100;
        b = a%50;
        c = b%20;
        d = c%10;
        e = d%5;
        f = e%2;
        numero100 = valorDoSaque/100;
        numero50 = a/50;
        numero20 = b/20;
        numero10 = c/10;
        numero5 = d/5;
        numero2 = e/2;
        numero1 = f/1;

        printf("%d notas de 100, %d notas de 50, %d notas de 20, %d notas de 10, %d notas de 5, %d notas de 2, %d nota de 1\n",numero100, numero50, numero20, numero10, numero5, numero2, numero1);
    }
    else if(100 > valorDoSaque && valorDoSaque >= 50){
        a = valorDoSaque%50;
        b = a%20;
        c = b%10;
        d = c%5;
        e = d%2;
        numero100 = 0;
        numero50 = valorDoSaque/50; 
        numero20 = a/20;
        numero10 = b/10;
        numero5 = c/5;
        numero2 = d/2;
        numero1 = e/1;
        
        printf("%d notas de 100, %d notas de 50, %d notas de 20, %d notas de 10, %d notas de 5, %d notas de 2, %d nota de 1\n",numero100, numero50, numero20, numero10, numero5, numero2, numero1);
    }
    else if(50 > valorDoSaque && valorDoSaque >= 20){
        a = valorDoSaque%20;
        b = a%10;
        c = b%5;
        d = c%2;
        numero100 = 0;
        numero50 = 0; 
        numero20 = valorDoSaque/20;
        numero10 = a/10;
        numero5 = b/5;
        numero2 = c/2;
        numero1 = d/1;

        printf("%d notas de 100, %d notas de 50, %d notas de 20, %d notas de 10, %d notas de 5, %d notas de 2, %d nota de 1\n",numero100, numero50, numero20, numero10, numero5, numero2, numero1);

    }
    else if(20 > valorDoSaque && valorDoSaque >= 10){
        a = valorDoSaque%10;
        b = a%5;
        c = b%2;
        numero100 = 0;
        numero50 = 0; 
        numero20 = 0;
        numero10 = valorDoSaque/10;
        numero5 = a/5;
        numero2 = b/2;
        numero1 = c/1;

        printf("%d notas de 100, %d notas de 50, %d notas de 20, %d notas de 10, %d notas de 5, %d notas de 2, %d nota de 1\n",numero100, numero50, numero20, numero10, numero5, numero2, numero1);

    }
    else if(10 > valorDoSaque && valorDoSaque >= 5){
        a = valorDoSaque%5;
        b = a%2;
        numero100 = 0;
        numero50 = 0; 
        numero20 = 0;
        numero10 = 0;
        numero5 = valorDoSaque/5;
        numero2 = a/2;
        numero1 = b/1;

        printf("%d notas de 100, %d notas de 50, %d notas de 20, %d notas de 10, %d notas de 5, %d notas de 2, %d nota de 1\n",numero100, numero50, numero20, numero10, numero5, numero2, numero1);

    }
    else if (5 > valorDoSaque && valorDoSaque >= 2){
        a = valorDoSaque%2;
        numero100 = 0;
        numero50 = 0; 
        numero20 = 0;
        numero10 = 0;
        numero5 = 0;
        numero2 = valorDoSaque/2;
        numero1 = a/1;

        printf("%d notas de 100, %d notas de 50, %d notas de 20, %d notas de 10, %d notas de 5, %d notas de 2, %d nota de 1\n",numero100, numero50, numero20, numero10, numero5, numero2, numero1);

    }
    else {
        numero100 = 0;
        numero50 = 0; 
        numero20 = 0;
        numero10 = 0;
        numero5 = 0;
        numero2 = 0;
        numero1 = 1;

        printf("%d notas de 100, %d notas de 50, %d notas de 20, %d notas de 10, %d notas de 5, %d notas de 2, %d nota de 1\n",numero100, numero50, numero20, numero10, numero5, numero2, numero1);
    }
    
    return 0
}