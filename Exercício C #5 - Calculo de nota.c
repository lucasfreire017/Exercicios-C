/*
Escreva um programa que:
·        Receba 2 notas de um aluno.
·        Calcule a média entre esses dois valores (somar e dividir por 2).
·        Caso a média seja igual ou superior a 6 exibir “Aluno Aprovado” e encerrar o programa.
·        Caso a média não atinja o valor mínimo de 6, uma terceira nota deve ser lida.
·        Essa terceira nota deverá substituir o valor da menor nota lida anteriormente.
·        Calcular e exibir a média utilizando os novos valores.
·        Caso a nova média seja igual ou superior a 6 exibir “Aluno aprovado”
·        Caso contrário exibir “Aluno Reprovado”.
·        Encerrar o programa.Leitura Avançada
*/

#include <stdio.h>

int main(){
    int maior = 0;

    printf("Nota 1: ");
    int n1;
    scanf("%i", &n1, &maior);

    printf("Nota 2: ");
    int n2;
    scanf("%i", &n2);

    if (maior < n2)
    {
        maior = n2;
    }
    

    int media = (n1+n2)/2;
    printf("A media foi igual a: %i", media);
    printf("\n");
    if (media >= 6)
    {
        printf("ALUNO APROVADO");}

        else if (media < 6)
        {
            printf("Nota 3: ");
            int n3;
            scanf("%i", &n3);

            media = (n3 + maior);

        if (media >= 6)
        {
            printf("ALUNO APROVADO");}
            else
                printf("ALUNO REPROVADO");
        }         
}