/*Faça um programa que leia uma palavra, calcule quantas vogais
(a, e, i, o, u) possui essa palavra. Depois, leia um caractere (vogal
ou consoante) e substitua todas as vogais da palavra dada por esse
caractere.*/
#include <stdio.h>
#include <string.h>

int main(){
    int j, a, e, i, o, u;
    char string[50], k;
    a = 0;
    e = 0;
    i = 0;
    o = 0;
    u = 0;
    printf("Digite uma string: ");
    scanf("%[^\n]", string);
    printf("Digite uma letra para substituir todas as vogais: ");
    scanf(" %c", &k);
    for(j = 0; j < strlen(string) + 1; j++){
        if(string[j] == 'a' || string[j] == 'A'){
            a++;
        }
        else if(string[j] == 'e' || string[j] == 'E'){
            e++;
        }
        else if(string[j] == 'i' || string[j] == 'I'){
            i++;
        }
        else if(string[j] == 'o' || string[j] == 'O'){
            o++;
        }
        else if(string[j] == 'u' || string[j] == 'U'){
            u++;
        }
    }
    printf("Vezes que a vogal a repetem: %d\n", a);
    printf("Vezes que a vogal e repetem: %d\n", e);
    printf("Vezes que a vogal i repetem: %d\n", i);
    printf("Vezes que a vogal o repetem: %d\n", o);
    printf("Vezes que a vogal u repetem: %d\n", u);
    
    for(i = 0; i < strlen(string) + 1; i++){
        if(string[i] == 'a' || string[i] == 'A'){
            string[i] = k;
        }
        else if(string[i] == 'e' || string[i] == 'E'){
            string[i] = k;
        } 
        else if(string[i] == 'i' || string[i] == 'I'){
            string[i] = k;
        }
        else if(string[i] == 'o' || string[i] == 'O'){
            string[i] = k;
        }
        else if(string[i] == 'u' || string[i] == 'U'){
            string[i] = k;
        }
    }
    printf("%s\n", string);

}