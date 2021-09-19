/*Um palíndromo é uma palavra ou frase que pode ser lida no seu sentido normal, da esquerda para a direita, bem como no sentido contrário, da direita para a esquerda, sem que haja mudança nas palavras que a formam e no seu significado.

Crie uma função que testa uma string e retorna 0 se ela não é um palíndromo e 1 se ela é.

Utilize essa função para validar se a string recebida no seu programa é ou não um palíndromo e exiba na tela o resultado.*/

#include <stdio.h>

int palindromo(char palavra[30]){
    int i, len, diferentes = 0;

    len = strlen(palavra);
    len--;// último índice válido da string (vetor)
    i = 0; // primeiro índice válido da string (vetor)
    while(len >= i){
        if(palavra[i] != palavra[len]) // conta as letras diferentes
            diferentes ++;
        i++;
        len--;}
    if(diferentes == 0)
        return 1; 
    else
        return 0;
    return 0;
}

int main(){
    char key[30];
    printf("Digite uma palavra: ");
    scanf("%s",&key);

    
    if (palindromo(key) == 1)
    {printf("Palindromo");}
    else
    {printf("Nao palindromo");}
}
