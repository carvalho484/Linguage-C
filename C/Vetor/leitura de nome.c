/******************************************************************************
Programa: Leitura de Nome com fgets
Autor: Lucas Carvalho
Data: 26/05/2025
Descrição: Este programa solicita o nome do usuário, lê a entrada
           com a função fgets e exibe o nome formatado na tela.
*******************************************************************************/
#include <stdio.h>

int main()
{
    char nome[50];
    
    printf("Qual e o seu nome\n");
    fgets(nome, sizeof(nome), stdin);
    
    printf("Seu nome é: \n%s\n", nome);
    
    return 0;
}
