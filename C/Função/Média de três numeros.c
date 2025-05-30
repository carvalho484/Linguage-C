/******************************************************************************
Programa: Cálculo da Média de Três Números.
Autor: Lucas Carvalho.
Data: 30/05/2025.
Descrição: Este programa lê três números reais informados
           pelo usuário, calcula a média entre eles usando
           uma função e exibe o resultado na tela
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

double media(double vetor[3]) {
    return (vetor[0] + vetor[1] + vetor[2]) / 3.0;
}

int main(void)
{
    double vetor[3], media_final;
    int i;
    
    for(i = 0; i < 3; i++){
        printf("Informe o valor para calcular a media:\n");
        scanf("%lf", &vetor[i]);
    }
    
    media_final = media(vetor);
    
    printf("A media dos valores e: %.2lf\n", media_final);
}