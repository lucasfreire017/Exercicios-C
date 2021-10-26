 #include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define tam 25
#define tam2 11
typedef struct{
        char palavra[tam];
        char cpf[tam2];
}
dados;
void criptografa(dados *cripto);
void descriptografar(dados *cripto);

void criptografa(dados *cripto){
     printf("Informe o texto a ser criptografado: ");
     gets(cripto->palavra);


    for(int i = 0 ; i < strlen(cripto->palavra) ; i++){
          if(cripto->palavra[i] == 'z'){
                        cripto->palavra[i] = 'c';
            }
           else  if(cripto->palavra[i] == 'y'){
                          cripto->palavra[i] = 'b';
            }
            else if (cripto->palavra[i] == 'x'){
   cripto->palavra[i] = 'a';
        }
             else {
                  cripto->palavra[i] = cripto->palavra[i] + 3 ; 
                  }

            }

            for(int i = 0 ; i< strlen(cripto->palavra); i++){
             putchar(cripto->palavra[i]);
}            printf("\n");
             for(int i = 0 ; i < strlen(cripto->palavra); i++){
             printf(" %d ",cripto->palavra[i]);

}            

            printf("\n");

}
//Função do XP_hunter lol
void descriptografar(dados *cripto){
     for(int i = 0; i < strlen(cripto->palavra); ++i){
           cripto->palavra[i] = (char)((int)cripto->palavra[i] - 3);
            printf(" %d ", (int)cripto->palavra[i]);
            }
            printf("\n");
            printf("%s ", cripto->palavra);   
            printf("\n");  
}

int main (){

     int resposta1;
     int resposta2;
     int resposta3;
     dados nome;  

    printf("Informe o que deseja fazer\n 1 - Criptografar\n 2 - Descriptografar\n 3 - Sair\n ==> ");
    scanf("%i", &resposta1);
    if(resposta1==1)
        {
          resposta2 = 1;          
        }
    if(resposta1 == 2)
        {
          resposta2 = 2;
        }
    else
        {
          printf("Programa Finalizado");
        }

     /*---------------------------------------*/

     if (resposta2 == 1)
     {
          system("cls");
          printf("Informe o que deseja Criptografar\n 1 - Arquivo de texto (.txt)\n 2 - Texto digitado\n ==> ");
          scanf("%i", &resposta2);
          /*é preciso repetir as mesmas instruções deste if no if abaixo*/
          if (resposta2 == 1){ 
             printf("Arquivo TXT");
             
          }

          if (resposta2 == 2){

               system("cls");
               criptografa(&nome);
               resposta3 = 2;   
          }
          
     }
     /*---------------------------------------*/
     /*é preciso repetir as mesmas instruções do if de cima neste if abaixo*/
    if (resposta3 == 2)
    {
     system("cls");   
     criptografa(&nome);  
    } 
    
     
}