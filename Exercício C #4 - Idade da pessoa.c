/*
Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.
*/

#include <stdio.h>

int main(){

    printf("Anos: ");
    int anos;
    scanf("%i", &anos);

    printf("Meses: ");
    int meses;
    scanf("%i", &meses);

    printf("Dias: ");
    int dias;
    scanf("%i", &dias);

    int resultado = (anos*365)+(meses*12)+(dias*30);
    printf("\n");
    printf("Dias: %i", resultado);
    
}