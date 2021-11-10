/*
Fazer um programa que solicita o total gasto pelo cliente de uma loja, imprime as opções de pagamento, solicita a opção desejada e imprime o valor total das prestações (se houverem).

 1) Opção: a vista com 10% de desconto
 2) Opção: em duas vezes (preço da etiqueta)
 3) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00).

Após a opção ser selecionada exibir os valores de pagamentos com as datas dos vencimentos das parcelas
*/

#include<stdio.h>
#include <time.h>

int main(void){

    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);

    float num;
    printf("Digite o valor gasto: ");
    scanf("%f", &num);
    printf("\n");

    printf("SELECIONE UMA OPCAO:\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");

    // Exibição das opções
    if (num < 100){
        printf("1) A vista com 10%% de desconto\n");
        printf("2) Em duas vezes de R$%.2f", num/2);}

    else{
        printf("1) A vista com 10%% de desconto\n");
        printf("2) Em duas vezes de R$%.2f\n", (num/2));
        printf("3) De 3 ate 10 vezes com 3%% de juros ao mes");}
    printf("\n\n");

    


    while(1)
    {
        int option;
        printf("Digite sua opcao: ");
        scanf("%d", &option);
        printf("\n");

         if(option == 1 || option == 2 || option == 3){
            
            // Opçao 1
            if(option == 1){
                printf("Sua compra de R$%.2f com pagamento a vista tendo 10%% de desconto ficara: R$%.2f", num, 0.1*num);
                break;
                }

            // Opção 2
            if(option == 2){
                printf("Sua compra de R$%.2f parcelada em 2x ficara:\n", num);
                printf("1 Parcela de %.2f | VENCIMENTO: %d/%d/%d\n", num/2, tm.tm_mday, tm.tm_mon + 2, tm.tm_year + 1900);
                printf("2 Parcela de %.2f | VENCIMENTO: %d/%d/%d\n", num/2, tm.tm_mday, tm.tm_mon + 3, tm.tm_year + 1900);
                break;

            }
            // Opção 3 
            if(num < 100 && option == 3){
                printf("Opcao invalida\n");}
            else{
                
                while (1)
                {
                    int parcela;
                int c;
                printf("Em quantas vezes deseja parcelar?");
                scanf("%d", &parcela);
                printf("\n");
                
                if (parcela >= 3 && parcela <= 10)
                {     
                    float juros1 = (0.03 * num) + num;
                    float juros2 = (0.03 * juros1) + juros1;
                    float juros3 = (0.03 * juros2) + juros2;
                    float juros4 = (0.03 * juros3) + juros3;
                    float juros5 = (0.03 * juros4) + juros4;
                    float juros6 = (0.03 * juros5) + juros5;
                    float juros7 = (0.03 * juros6) + juros6;
                    float juros8 = (0.03 * juros7) + juros7;
                    float juros9 = (0.03 * juros8) + juros8;
                    float juros10 = (0.03 * juros9) + juros9;
                                  
                    if (parcela == 3){
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros1, tm.tm_mday, tm.tm_mon + 2, tm.tm_year + 1900);                       
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros2, tm.tm_mday, tm.tm_mon + 3, tm.tm_year + 1900);    
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros3, tm.tm_mday, tm.tm_mon + 4, tm.tm_year + 1900);                      
                    }
                    if (parcela == 4){
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros1, tm.tm_mday, tm.tm_mon + 2, tm.tm_year + 1900);                       
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros2, tm.tm_mday, tm.tm_mon + 3, tm.tm_year + 1900);    
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros3, tm.tm_mday, tm.tm_mon + 4, tm.tm_year + 1900);                      
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros4, tm.tm_mday, tm.tm_mon + 5, tm.tm_year + 1900);                    
                    }
                    if (parcela == 5){
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros1, tm.tm_mday, tm.tm_mon + 2, tm.tm_year + 1900);                       
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros2, tm.tm_mday, tm.tm_mon + 3, tm.tm_year + 1900);    
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros3, tm.tm_mday, tm.tm_mon + 4, tm.tm_year + 1900);                      
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros4, tm.tm_mday, tm.tm_mon + 5, tm.tm_year + 1900);                    
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros5, tm.tm_mday, tm.tm_mon + 6, tm.tm_year + 1900);                 }
                    if (parcela == 6){
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros1, tm.tm_mday, tm.tm_mon + 2, tm.tm_year + 1900);                       
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros2, tm.tm_mday, tm.tm_mon + 3, tm.tm_year + 1900);    
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros3, tm.tm_mday, tm.tm_mon + 4, tm.tm_year + 1900);                      
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros4, tm.tm_mday, tm.tm_mon + 5, tm.tm_year + 1900);                    
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros5, tm.tm_mday, tm.tm_mon + 6, tm.tm_year + 1900);
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros6, tm.tm_mday, tm.tm_mon + 7, tm.tm_year + 1900);
                    }
                    if (parcela == 7){
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros1, tm.tm_mday, tm.tm_mon + 2, tm.tm_year + 1900);                       
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros2, tm.tm_mday, tm.tm_mon + 3, tm.tm_year + 1900);    
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros3, tm.tm_mday, tm.tm_mon + 4, tm.tm_year + 1900);                      
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros4, tm.tm_mday, tm.tm_mon + 5, tm.tm_year + 1900);                    
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros5, tm.tm_mday, tm.tm_mon + 6, tm.tm_year + 1900);
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros6, tm.tm_mday, tm.tm_mon + 7, tm.tm_year + 1900);
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros7, tm.tm_mday, tm.tm_mon + 8, tm.tm_year + 1900);
                    }
                    if (parcela == 8){
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros1, tm.tm_mday, tm.tm_mon + 2, tm.tm_year + 1900);                       
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros2, tm.tm_mday, tm.tm_mon + 3, tm.tm_year + 1900);    
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros3, tm.tm_mday, tm.tm_mon + 4, tm.tm_year + 1900);                      
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros4, tm.tm_mday, tm.tm_mon + 5, tm.tm_year + 1900);                    
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros5, tm.tm_mday, tm.tm_mon + 6, tm.tm_year + 1900);
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros6, tm.tm_mday, tm.tm_mon + 7, tm.tm_year + 1900);
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros7, tm.tm_mday, tm.tm_mon + 8, tm.tm_year + 1900);
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros8, tm.tm_mday, tm.tm_mon + 9, tm.tm_year + 1900);
                    }
                    if (parcela == 9){
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros1, tm.tm_mday, tm.tm_mon + 2, tm.tm_year + 1900);                       
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros2, tm.tm_mday, tm.tm_mon + 3, tm.tm_year + 1900);    
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros3, tm.tm_mday, tm.tm_mon + 4, tm.tm_year + 1900);                      
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros4, tm.tm_mday, tm.tm_mon + 5, tm.tm_year + 1900);                    
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros5, tm.tm_mday, tm.tm_mon + 6, tm.tm_year + 1900);
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros6, tm.tm_mday, tm.tm_mon + 7, tm.tm_year + 1900);
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros7, tm.tm_mday, tm.tm_mon + 8, tm.tm_year + 1900);
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros8, tm.tm_mday, tm.tm_mon + 9, tm.tm_year + 1900);
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros9, tm.tm_mday, tm.tm_mon + 10, tm.tm_year + 1900);
                    }
                    if (parcela == 10){
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros1, tm.tm_mday, tm.tm_mon + 2, tm.tm_year + 1900);                       
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros2, tm.tm_mday, tm.tm_mon + 3, tm.tm_year + 1900);    
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros3, tm.tm_mday, tm.tm_mon + 4, tm.tm_year + 1900);                      
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros4, tm.tm_mday, tm.tm_mon + 5, tm.tm_year + 1900);                    
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros5, tm.tm_mday, tm.tm_mon + 6, tm.tm_year + 1900);
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros6, tm.tm_mday, tm.tm_mon + 7, tm.tm_year + 1900);
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros7, tm.tm_mday, tm.tm_mon + 8, tm.tm_year + 1900);
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros8, tm.tm_mday, tm.tm_mon + 9, tm.tm_year + 1900);
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros9, tm.tm_mday, tm.tm_mon + 10, tm.tm_year + 1900);
                        printf("%d Parcela de R$%.2f com 3%% de juros ao mes | VENCIMENTO: %d/%d/%d\n", c, juros10, tm.tm_mday, tm.tm_mon + 11, tm.tm_year + 1900);
                    }
                break;   
                }
                else{
                   printf("Opcao invalida, o numero de parcelas deve estar entre 3 e 10. Digite novamente...\n"); 
                }
                }
                break;
                }
            }

        else{
            printf("Opcao invalida, digite novamente...\n");
            }
            
    }
   
    

}