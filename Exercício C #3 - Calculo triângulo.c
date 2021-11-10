/*
Para que 3 linhas unidas formem um triangulo cada um de seus lados deve ser menor que a soma dos outros dois e nenhum dos valores pode ser negativo ou igual azero, caso contrário a figura não corresponderá a um triangulo.
 
Os triângulos podem ser definidos com:
 
·        Equiláteros: Quando todos os seus lados são iguais
·        Isósceles: Quando dois de seus lados são iguais
·        Escaleno: se nenhum de seus lados são iguais.
 
Escreva um algoritmo que ao ler o tamanho dos 3 lados de um triangulo determine primeiramente se os valores correspondem aos lados de um triangulo possível e depois se esse triangulo se classifica como equilátero,isósceles ou escaleno.
*/

#include <stdio.h>

int main(){
    printf("Primeiro segmento: ");
    float r1;
    scanf("%f", &r1);

    printf("Segundo segmento: ");
    float r2;
    scanf("%f", &r2);

    printf("Terceiro segmento: ");
    float r3;
    scanf("%f", &r3);

    if (r1 < r2 + r3 && r2 < r1 + r3 && r3 < r1 + r2)
    {
        printf("Os seguimentos acima podem formar um triangulo");
        printf("\n");

        // Equiláteros: Quando todos os seus lados são iguais
        if ( (r1 == r2) && (r1 == r3) && (r2 == r3) )
        {
            printf("Os seguimentos correspondem a um TRIANGULO EQUILATERO");
        }
        // Isósceles: Quando dois de seus lados são iguais
        else if (( ( (r1 == r2) != r3) || ( (r3 == r2) != r1) || ( (r1 == r3) != r2)))
        {
            printf("Os seguimentos correspondem a um ISOCELES");
        }
        // Escaleno: se nenhum de seus lados são iguais.
        else if ( (r1 != r2) && (r3 || r2 != r1) && (r3 || r3 != r1) && r2)
        {
            printf("Os seguimentos correspondem a um ESCALENO");
        }         
    }
    else
        printf("Os seguimentos acima NAO PODEM formar um triangulo.");
         
}