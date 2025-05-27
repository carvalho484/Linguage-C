/******************************************************************************
 Programa: Encontra o maior valor em uma matriz 3x3
Autor: Lucas Carvalho
Data: 26/05/2025
Descrição: O programa lê uma matriz 3x3 de inteiros, imprime a matriz,
           e exibe o maior valor encontrado, junto com sua posição
           (linha e coluna).

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int matriz[3] [3];
    int i, j, maior, maior_i, maior_j;
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("inform o valor de [%d] [%d]\n", i, j);
            scanf("%d", &matriz[i] [j]);
        }
    }
    printf("\n");
    
    maior = matriz [0] [0];
    maior_i = 0;
    maior_j = 0;
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(matriz [i] [j] > maior){
                maior = matriz [i] [j];
                maior_i = i;
                maior_j = j;
            }
        }
    }
    printf("<MATRIZ>\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i] [j]);
        }
        printf("\n");
    }
    
    printf("\nMaior valor: %d\n", maior);
    printf("Linha: %d, Coluna: %d\n", maior_i, maior_j);
    
    return 0;
}