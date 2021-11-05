#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    FILE *ler; // ponteiro para do arquivo "criptografado.txt"
    FILE *escreve; // ponteiro para escrever no arquivo "descriptografado.txt" sem formatação
    FILE *formata; // ponteiro para o arquivo "descriptografado.txt" para ser formatado
    char c; // variavel que escreve o texto descriptografado sem formatação
    char formatado[113]; // variavel para formatar o texto descriptografado
    int resposta, chave;
    

    printf("Informe o que deseja fazer\n 1 - Criptografar\n 2 - Descriptografar\n 3 - Sair\n ==>");
    scanf("%d", &resposta);
    
    if(resposta==1 || resposta==2)
    {
    printf("\nDigite a chave de criptografia:");
    scanf("%d", &chave);
    }
    
    if(resposta==1) // Texto a ser criptografado
        {
        ler = fopen("mensagem.txt", "r");
        escreve = fopen("criptografada.txt", "w");
        
        if(chave>0 && chave <113) // As chaves devem ser de valor inteiro entre 0 a 113
        {
            while(!feof(ler))
            {
                fscanf(ler, "%c", &c);
                
                if(c>=33 && c<=47)
                {
                    c = c + 1+chave;
                }
                else if(c>=48 && c<=74)
                {
                    c = c + 2+chave;
                }
                else if(c>=75 && c<=103)
                {
                    c = c + 3+chave;
                }
                else if(c>=104 && c<=138)
                {
                    c = c + 4+chave;
                }
                else
                {
                    c = c - 1+chave;
                }
                
                fprintf(escreve, "%c", c);
           }
        }
        else
        {
            printf("\nA chave inserida nao atende aos requisitos!");
        }
           
           fclose(ler);
           fclose(escreve);
        }
  
    else if(resposta == 2) // Texto a ser descriptografado
        {
            ler = fopen("criptografada.txt", "r"); // lê o texto criptografado
            escreve = fopen("descriptografada.txt", "w"); // abre "descriptografado.txt" para escrita
            
                while(!feof(ler))
                {
                fscanf(ler, "%c", &c);
                
                if(c>=34+chave && c<=48+chave)
                {
                    c = c - 1-chave;
                }
                else if(c>=50+chave && c<=76+chave)
                {
                    c = c - 2-chave;
                }
                else if(c>=78+chave && c<=106+chave)
                {
                    c = c - 3-chave;
                }
                else if(c>=108+chave && c<=142+chave)
                {
                    c = c - 4-chave;
                }
                else
                {
                    c = c + 1-chave;
                }
                
                fprintf(escreve, "%c", c);
                
           }
            fclose(ler);
            fclose(escreve);   
        }   
    else{printf("PROGRAMA FINALIZADO");} 

    
    formata = fopen("descriptografada.txt", "r"); // Abre o txt com o texto descriptografado
    fscanf(formata, "%s", &formatado); // Lê o texto descriptografado
    int tamanho;
    tamanho = strlen(formatado); // Analisa quantos caracteres o texto descriptografado tem e salva em "formatado"
    
    formatado[tamanho-2] = ' '; // Remove o penúltimo str do texto descriptografado
    formatado[tamanho-1] = ' '; // Remove o último str do texto descriptografado
    fclose(formatado);

    escreve = fopen("descriptografada.txt", "w"); // Abre novamente o arquivo que contem o texto descriptografado
    fprintf(escreve, "%s", formatado); // Escreve o texto formatado no arquivo "descriptografado", ponteiro do arquivo = "escreve"
    fclose(escreve);

    return 0;
}