/*
Faça um programa em C que recebe do usuário 2 valores, um para a base e outro para a altura.
Com esses valores, desenhe na tela um quadrilátero utilizando o caractere * (asterisco) usando a quantidade informada 
para base como a quantidade de asteriscos impressos na horizontal e como altura, a quantidade de asteriscos exibidas na vertical
*/

#include<stdio.h>

int main(){

    int largura;
    printf("Digite a Largura: ");
    scanf("%d", &largura);

    printf("\n");

    int altura;
    printf("Digite a Altura: ");
    scanf("%d", &altura);

    printf("\n");

    for (int c = 1; c <= largura; c++)
    {
        printf("* ");
    }
    printf("\n");
    
    for (int x = 1;x <= altura ; x++ ){
        for (int c = 1; c <= largura; c++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}
