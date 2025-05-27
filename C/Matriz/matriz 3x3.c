/******************************************************************************
Programa: Leitura e impressão de matriz 3x3
Autor: Lucas Carvalho
Data: 26/05/2025
Descrição: Este programa solicita ao usuário que informe os valores
           de uma matriz 3x3 de inteiros e, em seguida, imprime a matriz na tela.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int matriz [3] [3];
    int i, j;
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Informe o valor da posição [%d][%d]:\n", i, j);
            scanf("%d", &matriz[i] [j]);
        }
    }
    
    printf("\n");
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i] [j]);
        }
        printf("\n");
    }
    
    return 0;
}