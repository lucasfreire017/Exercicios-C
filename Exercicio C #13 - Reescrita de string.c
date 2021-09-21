/*
Escreva uma função em C que receba um string um caractere e o índice de uma posição do string como parâmetro e insira o caractere na posição "empurrando" todos os demais para o lado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trocar(char frase[], char letra, int posi)
{
    int controle;

    for(controle = strlen(frase) + 1; controle > posi; controle--)
    {
        frase[controle] = frase[controle-1];
    }
    
    frase[posi] = letra;
}

int main()
{
    char frase[25];
    char letra;
    int posi;

        printf("Digite um nome: ");
            scanf("%s",frase);

        printf("Escolha um caractere: ");
            scanf("%s",&letra);

        printf("Digite o numero da posicao que deseja: ");
            scanf("%d",&posi);

        printf("%s\n",frase);

    trocar(frase,letra,posi-1);

        printf("%s\n",frase);

    return 0;
}
