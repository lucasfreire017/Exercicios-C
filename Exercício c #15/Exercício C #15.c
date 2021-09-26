/*
Crie um programa em C que realiza a abertura e a leitura de um arquivo texto que contém uma sequencia de números formatados no padrão Brasileiro (Exemplo: 1.234,50).

O arquivo deve ser lido uma linha por vez e considerar que cada linha contém apenas um valor numérico.
Cada um dos valores lidos deve ser convertido em um valor do tipo float, caso o número não possa ser convertido por qualquer motivo, considere que o valor lido é 0.

Ao final da leitura do arquivo, exiba o valor da soma dos valores, a quantidade de valores lidos e a média estatística de
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    
    char frase[100];
    double media = 0.0;
    int i = 0;
    double total = 0;
   

    FILE *file;
    file = fopen("numero.txt", "r");

    if(file == NULL){
        printf("Arquivo não encontrado\n");
        getchar();
        exit(0);
    }

    while ((fgets(frase, sizeof(frase), file)) != NULL){
        
        printf("%s", frase);
        media += atof(frase);
        total += atof(frase);
        i++;
        }
    
    
    printf("\n");
    if (i != 0) media /= i;
    printf("\nMedia Geral: %.2f", media);
    printf("\n");
    printf("Soma dos valores: %.2f", total);
    printf("\n");
    printf("Foram lidos %i valores\n", i);


    fclose(file);
    system("pause");
    return 0;
}
