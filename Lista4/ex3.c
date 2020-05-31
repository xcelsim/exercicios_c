/*Faça um programa que receba do usuário uma string. O programa imprime a string sem
suas vogais.*/
#include <stdio.h>
#include <string.h>

int main(){
    char string[21], string2[21];
    int i, j;
    printf("Digite a string.\n");
    scanf("%[^\n]", string);
    j = 0;
    for(i = 0; i <= strlen(string); i++){
        if(string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u' &&
            string[i] != 'A' && string[i] != 'E' && string[i] != 'I' && string[i] != 'O' && string[i] != 'U'){
            string2[j] = string[i];
                j++;
        }
    }
    
    printf("%s\n", string2);
}