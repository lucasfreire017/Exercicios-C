/* Utilizando o operador % (resto de divisão) crie um programa que identifica se um ano digitado é ou não bissexto considerando 
a seguinte regra:

1. O Ano Bissexto consiste no ano que tem 366 dias, ou seja, um dia a mais do que os 365 habituais. 
2. Esse "dia extra" ocorre a cada 4 anos, quando é adicionado o 29 de fevereiro no calendário.
2. É considerado Bissexto todos os anos múltiplos de 4 que também não são múltiplos de 100, com exceção dos múltiplos de 400.
3. Anos múltiplo de 400 são bissextos em todas as hipótese
*/

#include <stdio.h>


int main(){
    int ano;
    printf("Digite o ano: ");
    scanf("%i", &ano);
    printf("\n");

    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){

        printf("O ano de %d e Bissexto", ano);}

    else{
        printf("O ano de %d nao e bissexto", ano);}
    
}