#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m=0; // armazena mês
    int a=0; // armazena ano
    int d=0; // armazena dia 
    int cont; // contador
    int dias=0; // contagem dos dias vencidos do ano 
    int x=3; // ponto de partida considerando o dia 01 de janeiro de 1901
    int res; // resultado dos calculos  
    char meses[13] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // vetor representa dias dos meses do ano 
 
    printf("-=-=-=- Vamos verificar qual dia da semana seria sua data -=-=-=-\n\n");
    printf("Digite um dia que deseja verificar: "); 
        scanf("%i", &d); // Dia
    printf("Digite um mes que deseja verificar: ");
        scanf("%i", &m); // Mês
    printf("Digite o ano entre 1901 e 2099 que deseja verificar: ");    
        scanf("%i", &a); // Ano
    printf("\n");

    
    if(a<1901 || a>2099) // Ano entre 1901 e 2099
        {
            printf("Ano invalido"); // caso ano não esteja entre 1901 e 2099
            return 0; // interrompe o programa
        }
    if(d<=0) // caso o dia seja menor que 0
            {
                printf("Dia invalido");
                return 0; // interrompe o programa
            }        
    if(m<=0 || m>12) // caso o mês não esteja entre 1 e 12
            {
                printf("Mes invalido");
                return 0; // interrompe o programa
            }            
        
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) // Meses que vão até dia 31
        {
            if(d>31)
            {
                printf("Dia invalido");
                return 0; // interrompe o programa
            }    
        }    
    if(m==4 || m==6 || m==9 || m==11) // Meses que vão até dia 30
        {
            if(d>30)
            {
                printf("Dia invalido");
                return 0; // interrompe o programa
            }    
        }    
    if(((a % 4 == 0) && (a % 100 !=0)) || (a % 400 == 0) ) // calculo de ano bissexto
        // Se o ano for multiplo de 4 E módulo diferente de 0 OU módulo de 400 igual a 0 (ano 2000)
    {
    printf("Ano Bissexto\n");
        if(m==2 && d>29) // para dias inválidos de Fevereiro maior que 29
        {
            printf("Dia invalido\n");
            return 0; // interrompe o programa
        }
        if(m<3) // aplicado uma correção para anos bissextos 
        {
            x=x-1;
        }
    }
    else // caso o ano não seja bissexto
    {
        printf("Ano nao Bissexto\n");
        x-=1;
        if(m==2 && d>28) // para dias inválidos de Fevereiro maior que 28
        {
            printf("Dia invalido\n");
            return 0; // interrompe o programa
        }
    }

 int ano = a - 1901; // contagem dos anos vencidos 
 int ano_bi = ano/4; // contagem dos anos bissextos 

// -=-=-=- Análise de dia da semana -=-=-=-

     for(cont=0; cont<m-1; cont++)
     {
         dias=dias + meses[cont];
     } 
     res =(x + d + ano%7 + ano_bi%7 + dias%7) %7; // calculo dos valores coletados 
    
        if (res == 0) printf("O dia verificado foi ====> Sabado");
    
    else
        if (res == 1) printf("O dia verificado foi ====> Domingo");
    
    else
        if (res == 2) printf("O dia verificado foi ====> Segunda");
    
    else
        if (res == 3) printf("O dia verificado foi ====> Terca");
    
    else
        if (res == 4) printf("O dia verificado foi ====> Quarta");
    
    else
        if (res == 5) printf("O dia verificado foi ====> Quinta");
    
    else
        if (res == 6) printf("O dia verificado foi ====> Sexta");

    return 0;
}