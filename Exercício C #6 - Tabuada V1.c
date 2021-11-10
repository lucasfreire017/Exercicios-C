#include <stdio.h>

int main(){
    // Declaração e input de variavel
    int num;
    printf("Digite um numero:");
    scanf("%i", &num);
    printf("\n");
    int c;
    for (c= 1; c <= 10; c++)
    {
        printf("%d X %d = %d", num, c, num*c);
        printf("\n");
    }
    
}