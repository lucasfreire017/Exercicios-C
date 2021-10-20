 #include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define tam 25
#define tam2 11
typedef struct{
        char palavra[tam];
        char cpf[tam2];
}dados;
void criptografa(dados *cripto);
void descriptografar(dados *cripto);

void chave ()
    {
    char CHAVE[]="StUvWxYz";
    int TAM_CHAVE=strlen(CHAVE);
    }

void receber_arquivo()
    {
    char TEXTO[100000];
    int TAM_TEXTO=strlen(TEXTO);
    }

int lerlinha(FILE*file, char*ler,int tamanho)
    {
    
        int posicao;
        char letra;
        posicao=0;
    
        while(!feof(file))
        {
            fscanf(file, "%c", &letra);
            if(letra=='\n')break;
            printf("%c", letra);
        }
        if(!feof(file))
        {
            return 0;
        }
        else
        {
            ler[posicao-1]=0;
            return 1;
        }
    }
void Criptografar()
    {
        FILE *file;
        char digitado[100] = "olho";
        char lido[1000];
        int tipo;
        
            system("cls");
            printf("Informe o que deseja Criptografar\n 1 - Arquivo de texto (.txt)\n 2 - Texto digitado\n ==>");
            scanf("%d", &tipo);
            
           if(tipo==1)
           {
                file=fopen("cura.txt", "r");
                while(lerlinha(file, lido, 1000)==0)
                {
                   if(strlen(lido)!=0){}   
                }
            fclose(file);    
            }    
            else if(tipo==2)
            {
                system("cls");
                printf("digite o texto a ser criptografado\n==>");
                scanf("%s",&digitado);
                fgets(digitado,1000,stdin);
            }
            else
            {
               printf("Opção Invalida");
            }
    }
    
void Descriptografar()
    {
        FILE *file;
        char lido[1000];
        int tipo;
        char digitado[1000];
            system("clear");
            printf("Informe o que deseja Descriptografar\n 1 - Arquivo de texto (.txt)\n 2 - Texto digitado\n==>");
            scanf("%d", &tipo);   
           
            if(tipo==1)
            {
            file=fopen("cura.txt", "r");
             while(lerlinha(file, lido, 1000)==0)
                {
                   if(strlen(lido)!=0)
                   {
                 
                   }   
                }
            fclose(file);
            }
            else if(tipo==2)
            {
                printf("digite o texto a ser descriptografado\n==>");
                fgets(digitado, 1000, stdin);
            }
            else
            {
               printf("Opção Invalida");
            }
    }

int main()

{
    int resposta;
    
    printf("Informe o que deseja fazer\n 1 - Criptografar\n 2 - Descriptografar\n 3 - Sair\n ==>");
    scanf("%d", &resposta);
    if(resposta==1)
        {
            
            Criptografar();
        }
    else if(resposta==2)
        {
            Descriptografar();
        }
    else
        {
            printf("Have a nice day!!!!");
        }
    return 0;
}
