/******************************************************************************
Programa: Cálculo da Distância entre Dois Pontos.
Autor    : Lucas Carvalho.
Data     : 29/05/2025.
Descrição: Este programa solicita ao usuário as coordenadas (X1, Y1) e (X2, Y2),
           e calcula a distância entre os dois pontos usando a fórmula da
           distância euclidiana.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double vetor[4], distancia;
    int i;
    
    for(i = 0; i < 4; i++){
        if(i == 0){
            printf("Informe o valor de (X1):\n");
        }else if(i == 1){
            printf("Informe o valor de (Y1):\n");
        }else if(i == 2){
            printf("Informe o valor de (X2):\n");
        }else{
            printf("Informe o valor de (Y2):\n");
        }
        scanf("%lf", &vetor[i]);
    }
    
    distancia = sqrt(pow(vetor[2] - vetor[0], 2) + pow(vetor[3] - vetor[1], 2));
    
    printf("\nDistancia = %.4lf\n", distancia);
    
    return 0;
}