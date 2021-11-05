#include <stdio.h>

int main()
{
    FILE *contc;
    char d;
    int cont=0;
    
    contc = fopen("mensagem.txt", "r");
    
    if(contc == NULL)
    {
        printf("\nNao foi possivel abrir o arquivo, por favor, renomeie o mesmo para \"mensagem.txt\" ");
        return 1;
    }
    
    else
    {
    while(!feof(contc))
    {
        fscanf(contc, "%c", &d);
        cont++;
    }
    cont--;
    }
    
    


//----------------------------------------------------------------------------------------------------------------
    
    
    
    
    FILE *ler;
    FILE *escreve;
    char c;
    int resposta, i;
    
    printf("Informe o que deseja fazer\n 1 - Criptografar\n 2 - Descriptografar\n 3 - Sair\n ==>");
    scanf("%d", &resposta);
    
    
    if(resposta==1)
        {
        ler = fopen("mensagem.txt", "r");
        escreve = fopen("criptografa.txt", "w");
    
             for(i=1; i<=cont; i++)
             {
                fscanf(ler, "%c", &c);
                
                if((c>=32 && c<=47) || (c=='\n'))
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
                else if (c>=139 && c<=250)
                {
                    c = c + 5;
                }
                
                fprintf(escreve, "%c", c);
             }
           
           
           fclose(ler);
           fclose(escreve);
        
        }
  
    else if(resposta==2)
        {
            
        ler = fopen("criptografa.txt", "r");
        escreve = fopen("descriptografa.txt", "w");
        
        for(i=1; i<=cont; i++)
        {
            fscanf(ler, "%c", &c);
            
            if((c>=33 && c<=48) || (c==11))
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
            else if(c>=144 && c<=255)
            {
                c = c - 5;
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