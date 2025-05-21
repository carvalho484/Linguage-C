/******************************************************************************
Programa: Calculadora de Média de Notas.
Autor: Lucas Carvalho.
Data: 21/05/2025.
Descrição: Este programa lê três notas de provas, calcula a média aritmética
e exibe o resultado formatado com duas casas decimais.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float vetor[3];
    float media;
    printf("Informe o valor da prova(a).\n");
    scanf("%f", &vetor[0]);
    printf("Informe o valor da prova(b).\n");
    scanf("%f", &vetor[1]);
    printf("Informe o valor da prova(c).\n");
    scanf("%f", &vetor[2]);
    
    media = ((vetor[0] + vetor[1] + vetor[2]) / 3.0);
    
    printf("\nA media das notas e de: \n%.2f", media);
}
