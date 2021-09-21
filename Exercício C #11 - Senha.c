/*Crie um função que receba como parâmetro uma string e valide se essa string contém pelo menos 8 caracteres, sendo eles pelo menos 1 letra maiúscula, 1 letra minúscula, 1 caractere especial e 1 número.

Crie na função main um função para receber uma senha, então aplique sua função para validar se ela tem a complexidade mínima exigida pela regra acima.*/

#include <stdio.h>

int confString(char string[])
{
    int n;
    int especial;
    int vet = 0;
    int maiuscula;
    int minuscula;
    
    while(string[vet] !='\0')
    {
        if(string[vet]>=65 && string[vet]<=90)
        {maiuscula=1;}
        if(string[vet]>=97 && string[vet]<=122)
        {minuscula=1;}
        if(string[vet]>=48 && string[vet]<=57)
        {n =1;}
        if(string[vet]>=33 && string[vet]<=47)
        {especial=1;}
        else if(string[vet]>=58 && string[vet]<=64)
        {especial=1;}
        vet++;
    }

    printf("\nSua senha tem %d caracteres\n", vet);
    if (vet>=8 && maiuscula == 1 && minuscula == 1 && n == 1 && especial== 1)
    {return 0;}
    else
    {return 1;}   
}

int main()
{
    char string[256], autenticacao;
    printf("Digite sua Senha: ");
    scanf("%s", string);
    autenticacao=confString(string);
    if(autenticacao==0)
    {printf("\nSenha valida!");}
    else
    {printf("\nSenha invalida!");}
    return 0;
}