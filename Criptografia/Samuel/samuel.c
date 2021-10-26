#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ler;
    FILE *escreve;
    char c;
    int resposta, chave;


    printf("Informe o que deseja fazer\n 1 - Criptografar\n 2 - Descriptografar\n 3 - Sair\n ==>"); // Menus
    scanf("%i", &resposta); // Leitura da repsosta do usúario

    
    if(resposta == 1)
        {
        printf("Digite a chave de criptografia:");
        scanf("%i", chave);
        ler = fopen("mensagem.txt", "r");
        escreve = fopen("criptografa.txt", "w");
        
            while(!feof(ler))
            {
                fscanf(ler, "%c", &c);
                
                if(c>=33 && c<=47)
                {
                    c = c + 1;
                }
                else if(c>=48 && c<=74)
                {
                    c = c + 2;
                }
                else if(c>=75 && c<=103)
                {
                    c = c + 3;
                }
                else if(c>=104 && c<=138)
                {
                    c = c + 4;
                }
                else
                {
                    c = c - 1;
                }
                
                fprintf(escreve, "%c", c);
           }
           
           fclose(ler);
           fclose(escreve);
        }
  
    else if(resposta==2)
        {
        printf("Digite a chave de criptografia:");
        scanf("%i", chave);
        ler = fopen("criptografa.txt", "r");
        escreve = fopen("descriptografa.txt", "w");
        
            while(!feof(ler))
            {
            fscanf(ler, "%c", &c);
            
            if(c>=34 && c<=48)
            {
                c = c - 1;
            }
            else if(c>=50 && c<=76)
            {
                c = c - 2;
            }
            else if(c>=78 && c<=106)
            {
                c = c - 3;
            }
            else if(c>=108 && c<=142)
            {
                c = c - 4;
            }
            else
            {
                c = c + 1;
            }
            
            fprintf(escreve, "%c", c);
           }
           
           fclose(ler);
           fclose(escreve);
        }   
     else
        {
            printf("Tenha um bom dia!!!!");
        }

    return 0;
}