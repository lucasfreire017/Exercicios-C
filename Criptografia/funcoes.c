 #include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void main(){
    char palavra[100];

    printf("Informe o texto a ser criptografado: ");
    scanf("%s", &palavra);

    for(int i = 0 ; i < strlen(palavra); i++)
        {
            if(palavra[i] == 'z')
            {
                palavra[i] = 'c';
            }
        
            else if(palavra[i] == 'y')
            {
                palavra[i] = 'b';
            }

            else if (palavra[i] == 'x')
            {
                palavra[i] = 'a';
            }

            else
            {
                palavra[i] = palavra[i] + 3; 
            }
        }
    printf(palavra);

}