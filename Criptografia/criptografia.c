#include <stdio.h>

int main()
{   
//----------------------------------------------------------------------------------------------------------------------------------------------------

    // Variáveis que serão usadas na contagem
    FILE *contc;
    char d;
    int cont=0;
    
    // Variáveis que serão usadas na criação e verificação da senha
    float chave,verificacao;
    int validaID=0,valida=0, ID, aux;
//----------------------------------------------------------------------------------------------------------------------------------------------------
    
    // Variáveis que serão usadas na criptografia e descriptografia
    FILE *ler;
    FILE *escreve;
    char c;
    int resposta, i;
    
//----------------------------------------------------------------------------------------------------------------------------------------------------
    
    // Menu do programa
    printf("Informe o que deseja fazer\n 1 - Criptografar\n 2 - Descriptografar\n 3 - Sair\n ==>");
    scanf("%d", &resposta);
    
//----------------------------------------------------------------------------------------------------------------------------------------------------
    
    // Bloco if destinado a criptografia
    if(resposta==1)
        {
        
        // Validação do nome do arquivo a ser criptografado, e contagem de caracteres
        contc = fopen("mensagem.txt", "r");
        if(contc == NULL)
        {
            printf("\nNao foi possivel abrir o arquivo, por favor, renomeie o mesmo para \"mensagem.txt\" ");
            return 1;}
        
        // Contagem do número de caracteres que o arquivo mensagem.txt possui
        else
        {
            while(!feof(contc))
            {
              fscanf(contc, "%c", &d);
              cont++;}
        cont--;}
        
        
        // Criação da chave do arquivo a partir de um ID maior que 0 e menor igual a 1000 e do número de caracteres do arquivo mensagem.txt
        printf("Crie um ID inteiro maior do que 0, e menor igual a 1000:");
        scanf("%d", &ID);
        while(ID<=0 || ID > 1000)
        {
            // Determina o número de vezes que o usuário poderá tentar ao criar o arquivo, e evita um loop infinito, caso o usuário digite um ID que não seja número
            if(validaID == 3)
            {
                printf("\nNumero de tentativas expirado, o ID digitado nao atende aos requisitos!");
                return 3;
            }
            printf("Digite um novo ID:");
            scanf("%d", &ID);
            
            validaID++;
            
        }
        
        // Criação da chave
        chave = (cont * 1.618 +ID*2.71)*3.14;
        
              
        // Apontamento e abertura de arquivo para leitura e escrita      
        ler = fopen("mensagem.txt", "r");
        escreve = fopen("criptografa.txt", "w");
    
             // Cadeias de blocos ifs para criptografia determinada pelo decimal correspondente ao caracter
             for(i=1; i<=cont; i++)
             {
                fscanf(ler, "%c", &c);
                
                // Cada range altera o caracter de uma forma, isso minimiza a padronização, e deixa a criptografia mais difícil de ser quebrada
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
                
                // Depois de transformado, é necessário que o caracter seja escrito em outro local ---> criptografa.txt
                fprintf(escreve, "%c", c);
             }
           
           // Fechamento dos arquivos a partir do endereço de memória
           fclose(ler);
           fclose(escreve);
           printf("A chave do arquivo e: %f", chave);
           printf("\n\nTenha um bom dia!");
        
        }
        
//------------------------------------------------------------------------------------------------------------------------------------------------------
  
    // Bloco if destina a descriptografia
    else if(resposta==2)
        {
         // Validação do nome do arquivo a ser descriptografado, e contagem de caracteres
         contc = fopen("criptografa.txt", "r");
         if(contc == NULL)
        {
            printf("\nNao foi possivel abrir o arquivo, por favor, renomeie o mesmo para \"criptografa.txt\"");
            return 1;}
        
        // Contagem do número de caracteres do arquivo criptografa.txt, que logicamente é igual ao número de caracteres de mensagem.txt
        else
        {
            while(!feof(contc))
            {fscanf(contc, "%c", &d);
            cont++;}
            
        cont--;}
        
        // Leitura do ID, obs: Não precisa verificar se o ID está dentro do padrão, pois isso facilitaria para um intruso
        printf("Digite o seu ID:");
        scanf("%d", &ID);
        
        /* Criação da chave, que será idêntica a da criptografia, caso o ID seja o mesmo, porém dessa vez não exibimos na tela, pois cabe ao usuário 
        lembrar da chave entregue no processo de criptografia */
        chave = (cont * 1.618 +ID*2.71)*3.14;
        
        // Validação da chave, com um número de tentativas limitado (O usuário tem 3 tentativas)
        while(valida <= 3)
        {
            printf("\nDigite a chave do arquivo:");
            scanf("%f", &verificacao);
            
            if(verificacao == chave)
            {
                break;
            }
            
            else if(valida == 2)
            {
                printf("\nNumero de tentativas expirado!");
                return 2;
            }
            else
            {
            printf("Tente outra vez!\n");
            valida++;
            }
        }
        
        // Apontamento e abertura de arquivo para leitura e escrita    
        ler = fopen("criptografa.txt", "r");
        escreve = fopen("descriptografa.txt", "w");
        
        // Cadeias de blocos ifs para descriptografia determinada pelo decimal correspondente ao caracter
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
            
            // Depois de transformado (engenharia inversa), é necessário que o caracter seja escrito em outro local ---> descriptografa.txt
            fprintf(escreve, "%c", c);
           }
           
           // Fechamento dos arquivos a partir do endereço de memória
           fclose(ler);
           fclose(escreve);
           printf("\n\nTenha um bom dia!");
        }
        
        
     else
        {
            printf("Tenha um bom dia!");
        }

    return 0;
}