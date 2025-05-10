/******************************************************************************
Faça um programa que leia um número N (positivo) e, 
usando um loop while, mostre todos os números de 1 até N que são múltiplos de 3.
09/05/2025

*******************************************************************************/
# include<stdio.h>
#include <math.h>

int main (void)
{
    double n;
    int contador = 1;
    
    printf("Qual é o valor ? ");
    scanf("%lf", &n);
    
    if (n < 0) {
        printf("Numero incorreto! o numero tem que se positvo.");
    }else{
        while(contador <= n){
            if (contador % 3 == 0) {
            printf("%d\n", contador);
            }
            contador++;
        }
    }
    return 0;
}
