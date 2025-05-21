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
    float vetor[2];
    int i;
    float a, b, soma;
    
    for(i = 0; i < 2; i++){
        printf("Coloque um valor.\n");
        scanf("%f", &vetor[i]);
    }
    soma = (vetor[0] + vetor[1]);
    printf("\n%.2f\n", soma);
    
    return 0;
}