/*
Fazer uma rotina que recebe um string como parâmetro e imprime quantas palavras (separadas por espaços em branco) o mesmo contém.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char dig[51];  
    char fun[50][30];
    char visualizar;
    int palavras=0;
    int numpalavras=0;
    int numcaracteres=0;
    
    numpalavras=1;

    printf("Digite Uma Frase (Max. 50 Caracteres): ");
    fgets(dig,50,stdin);
    
    for(visualizar=0;visualizar<strlen(dig);visualizar++)
    {
        if(dig[visualizar]!=' ')
        {
            fun[palavras][numcaracteres]=dig[visualizar];
            numcaracteres++;
        }
        else
        {
            palavras++;
            numcaracteres=0;
            numpalavras++;
        }
    }
    printf("\nO Texto tem %d Palavras",numpalavras);
   
    return 0;
}
