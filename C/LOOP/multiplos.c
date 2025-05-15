/******************************************************************************
Programa: Multiplos de um Número.
Autor: Lucas Carvalho
Data: 15/05/2025
Descrição: Solicita um numero positivo e exibe os 
multiplos dele até uma quantidade informada.
*******************************************************************************/
#include<stdio.h>

int main(void)
{
    double n, x;
    double y = 1;
    printf("Qual é o valor que sera o multiplo ? (numero tem que ser positivo)\n");
    scanf("%lf", &n);
    if (n <= 0) {
        printf("Valor incorreto!");
        return 0;
    }
    
    printf("Ate quantas vezes sera contado ? (numero tem que ser positivo)\n");
    scanf("%lf", &x);
    if(x <= 0){
        printf("Valor incorreto!");
        return 0;
    }
    
    printf("\n");
    printf("O multiplo de %.0lf contado ate %.0lf e de:\n", n, x);
    printf("\n");
    
    while(y <= x){
        double multiplo = y * n;
        y++;
        printf("%.0lf\n", multiplo);
    }
        return 0;
}