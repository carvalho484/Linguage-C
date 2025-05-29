/******************************************************************************
Programa : Cálculo de Áreas Geométricas.
Autor    : Lucas Carvalho.
Data     : 29/05/2025.
Descrição: Este programa lê três valores reais (A, B e C)
           e calcula as seguintes áreas geométricas:
           - Área do triângulo retângulo (base A, altura C).
           - Área do círculo (raio C).
           - Área do trapézio (bases A e B, altura C).
           - Área do quadrado (lado B).
           - Área do retângulo (lados A e B).
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double vetor[3], pi = 3.14159;
    double area, area_2, area_3, area_4, area_5;
    int i;
    
   for(i = 0; i < 3; i++){
       if(i == 0){
           printf("Me informe o valor de (a):\n");
       }else if(i == 1){
           printf("Me informe o valor de (b):\n");
       }else{
           printf("Me informe o valor de (c):\n");
       }
       scanf("%lf", &vetor[i]);
   }
    
    area = ((vetor[0] * vetor[2]) / 2.0);
    area_2 = pi * pow(vetor[2], 2);
    area_3 = ((vetor[0] + vetor[1]) * vetor[2]) / 2.0;
    area_4 = pow(vetor[1], 2);
    area_5 = (vetor[0] * vetor[1]);
    
    printf("\n");
    printf("TRIANGULO: %.3lf\n", area);
    printf("CIRCULO: %.3lf\n", area_2);
    printf("TRAPEZIO: %.3lf\n", area_3);
    printf("QUADRADO: %.3lf\n", area_4);
    printf("RETANGULO: %.3lf\n", area_5);
    
    return 0;
}