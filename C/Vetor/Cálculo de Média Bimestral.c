/******************************************************************************
Programa: Cálculo de Média Bimestral
Autor: Lucas Carvalho
Data: 21/05/2025
Descrição: Este programa solicita ao usuário o número de provas 
realizadas no bimestre (máximo 19), recebe as notas 
correspondentes, calcula a média e exibe todas as notas 
e a média final.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tamanho;
    printf("Quantas provas ocoreram no bimestre:\n");
    scanf("%d", &tamanho);
    if(tamanho <= 0 || tamanho >= 20){
        printf("ERRO! valor incopativel");
        return 2;
    }
    
    float vetor[tamanho], media, soma = 0;
    int i;
    
    for(i = 0; i < tamanho; i++){
        printf("Me informe as notas de cada prova:\n");
        scanf("%f", &vetor[i]);
        soma = soma + vetor[i];
    }
    
    media = (soma / tamanho);
    
    for(i = 0; i < tamanho; i++){
        printf("As Notas %.2f\n", vetor[i]);
    }
    printf("Media = %.2f\n", media);
    
    return 0;
}