#include <stdio.h>

// Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 10 utilizando um comando de loop for(....).

int main(){
    // Declaração e input de variavel


    int num;
    int c;
    for (num=1; num <= 10; num++)
    {
        printf("TABUADA DO %d\n", num);
        printf("=-=-=-=-=-=-=\n");
        for (c= 1; c <= 10; c++){
            printf("%d X %d = %d", num, c, num*c);
            printf("\n");
        }
        printf("\n");
        
    }   
}