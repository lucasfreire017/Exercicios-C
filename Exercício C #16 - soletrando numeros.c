/*
Fazer um programa em "C" que solicita um número inteiro e soletra o mesmo na tela.

Ex: 124: 

um, dois, quatro
*/

#include<stdio.h>
#include<conio.h>

int inverso(int n)
{
   int ret=0;
   int i=1;
   
   while(i<=n)
   {
       ret*=10;
       ret+=(n%(i*10)-n%i)/i;
       i*=10;
   }
   return ret;
}

int main(void){
    //Vetor de 10 palavras de até 10 caracteres
    char palavra[10][10] = {"zero ", "um ", "dois ", "tres ", "quatro ", "cinco ", "seis ", "sete ", "oito ", "nove "}; 
    
    printf("Digite um numero: ");
    int numero;
    scanf("%i", &numero);

    int num = inverso(numero);
    printf("\n");
    while(num > 0) //Enquanto numero maior que zero
    {
        int mod = num % 10;  //splita o ultimo numero
        printf("%s",palavra[mod]); //Escreve o digito por extenso 

        num = num / 10;    //divide o numero por 10 

    }
    
    return 0;   
    
}