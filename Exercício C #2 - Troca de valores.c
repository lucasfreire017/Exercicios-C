/*
Escreva um algoritmo que armazene o valor 10 em uma variável A e o valor 20 em uma variável B. A seguir (utilizando apenas atribuições entre variáveis) troque os seus conteúdos fazendo com que o valor que está em A passe para B e vice-versa. Ao final, escrever os valores que ficaram armazenados nas variáveis.
*/

#include <stdio.h>

int main(){
    int A = 10;
    int B = 20;
    int C;

    printf("Antes \n");
    printf("A:%i",A);
    printf("\n");
    printf("B:%i",B);
    printf("\n");
    printf("-------------------\n");
    printf("Depois \n");
    C = A;
    A = B;
    B = C;
    printf("A:%i",A, "\n");
    printf("\n");
    printf("B:%i",B, "\n");
}