/*Fazer um programa em C que pregunta o nome, o endereço, o telefone e a idade de uma pessoa e monta um string com a seguinte frase:

"Seu nome é ..., você tem ... anos, mora na rua ... e seu telefone é ... ."*/

#include<stdio.h>

int main(){
    char nome[50], end[100], tel[11];
    int idade;

    printf("NAO USE ESPACOS");
    printf("\n");
    printf("Qual seu nome? ");
    scanf("%s", &nome);
    printf("\n");
    printf("Qual seu endereco? ");
    scanf("%s", &end);
    printf("\n");
    printf("Qual seu telefone? ");
    scanf("%s", &tel);
    printf("\n");
    printf("Qual sua idade? ");
    scanf("%d", &idade);

    printf("Seu nome e %s, voce tem %d anos, mora na rua %s e seu telefone e %s", nome, idade, end, tel);
}