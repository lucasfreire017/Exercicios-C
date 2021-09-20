/*
Escreva uma função em C que receba um string um caractere e o índice de uma posição do string como parâmetro e insira o caractere na posição "empurrando" todos os demais para o lado.
*/

#include<stdio.h>

int formString(string, caractere, indice){
    int len, i;
    char novoCaractere[1];
    len = strlen(string);
    
    for(i=0; i < len; i++){
        if(string[i] == caractere){
            novoCaractere = caractere;
        }
    }
}

int main(){
    char string[30];
    printf("Digite uma palavra: ");
    scanf("%s", &string);

    char caractere;
    printf("Digite um caratecre da palavra %s: ", &string);
    scanf("%s", &caractere);

    int indice;
    printf("Digite um indice: ");
    scanf("%i", &indice);

    formString(string, caractere, indice);
}