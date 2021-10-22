/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m=0;
    int cont;
    int dias=0;
    int a=0;
    int d=0;
    int x=3;
    int res;
    char meses[13] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
 
    printf("-----Vamos verificar qual dia da semana é sua data-----\n\n");
    printf("Digite um dia que deseja verificar: "); 
        scanf("%i", &d);
    printf("Digite um mês que deseja verificar: ");
        scanf("%i", &m); 
    printf("Digite o ano entre 1901 e 2099 que deseja verificar: ");    
        scanf("%i", &a); 

    
    if(a<1901 || a>2099)
        {
            printf("Ano inválido");
            return 0;
        }
    if(d<=0)
            {
                printf("Dia invalido");
                return 0;
            }        
    if(m<=0 || m>12)
            {
                printf("Mês invalido");
                return 0;
            }            
        
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
        {
            if(d>31)
            {
                printf("Dia invalido");
                return 0;
            }    
        }    
    if(m==4 || m==6 || m==9 || m==11)
        {
            if(d>30)
            {
                printf("Dia invalido");
                return 0;
            }    
        }    
    if(((a % 4 == 0) && (a % 100 !=0)) || (a % 400 ==0) )
    {
    printf("Ano Bissexto\n");
        if(m==2 && d>29)
        {
            printf("Dia inválido\n");
            return 0;
        }
    }
    else
    {
        printf("Ano não Bissexto\n");
        x=x-1;
        if(m==2 && d>28)
        {
            printf("Dia inválido\n");
            return 0;
        }
    }
 int ano = a - 1901;
 int ano_bi = ano/4;
    
     for(cont=0; cont<m-1; cont++)
     {
         dias=dias + meses[cont];
     } 
     res =(x + d + ano%7 + ano_bi%7 + dias%7) %7;
    
        if (res == 0) printf("O dia verificado é ====> Sábado");
    
    else
        if (res == 1) printf("O dia verificado é ====> Domingo");
    
    else
        if (res == 2) printf("O dia verificado é ====> Segunda");
    
    else
        if (res == 3) printf("O dia verificado é ====> Terça");
    
    else
        if (res == 4) printf("O dia verificado é ====> Quarta");
    
    else
        if (res == 5) printf("O dia verificado é ====> Quinta");
    
    else
        if (res == 6) printf("O dia verificado é ====> Sexta");

    return 0;
}




