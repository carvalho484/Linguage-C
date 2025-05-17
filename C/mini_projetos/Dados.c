/******************************************************************************
 * Programa: Simulador de Lançamento de Dados
 * Autor: Lucas Carvalho
 * Data: 17/05/2025
 * Descrição:
 *   Este programa simula o lançamento de três dados, 
 *   exibe os valores sorteados em cada rodada, 
 *   calcula a soma total dos valores e imprime o resultado.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    
    int aleatorio_1 = (rand() % 6) + 1;
    int aleatorio_2 = (rand() % 6) + 1;
    int aleatorio_3 = (rand() % 6) + 1;
    
    printf("Valor da Primeira rodada do dado: %d\n", aleatorio_1);
    printf("Valor da Segunda rodada do dado: %d\n", aleatorio_2);
    printf("Valor da Terceira rodada do dado: %d\n", aleatorio_3);
    
    int soma = (aleatorio_1 + aleatorio_2 + aleatorio_3);
    
    printf("\nValor total das rodadas dos dados:  %d\n", soma);
    
    
    return 0;
}