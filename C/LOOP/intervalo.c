/******************************************************************************
Programa: Soma de Dois Valores com Intervalo.
Autor: Lucas Carvalho
Data: 19/05/2025
Descrição: Programa que solicita ao usuário dois valores
           entre 5 e 10, garantindo a validação para que
           os valores estejam dentro do intervalo correto,
           ao final, exibe a soma dos valores informados.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double a, b;
    
    do{
        printf("Coloque am valor entre 5 e 10:\n");
        scanf("%lf", &a);
        if(a < 5 || a > 10){
            printf("\nERRO! Valor Incorreto Tente Novamente\n");
            printf("\n");
            continue;
        }
        
        printf("\nColoque um outro valor entre 5 e 10:\n");
        scanf("%lf", &b);
        if(b < 5 || b > 10){
            printf("ERRO! Valor Incorreto Tente Novamente\n");
            continue;
        }
        break;
    }while(1);
    
    double soma = a + b;
    
    printf("\nA soma Entre A e B = %.2lf", soma);
    
    return 0;
}