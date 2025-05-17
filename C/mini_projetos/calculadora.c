/******************************************************************************
Nome do programa : Calculadora Simples em C.
Autor            : Lucas Carvalho.
Data de criação  : 17/05/2025
Descrição        : Este programa realiza operações matemáticas básicas 
                   (soma, subtração, multiplicação e divisão com resto)
                   entre dois números reais fornecidos pelo usuário.
                   
Linguagem        : C
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
    int opcao;
    double a, b;
    printf("Qual é o valor de (a):\n");
    scanf("%lf", &a);
    printf("Qual é o valor de (b):\n");
    scanf("%lf", &b);
    
    printf("\n");
    printf("Escolha uma das opções\n");
    printf("1 - soma\n");
    printf("2 - subtração\n");
    printf("3 - multiplicação\n");
    printf("4 - divisão\n");
    printf("\n");
    
    scanf("%d", &opcao);
    printf("\n");
    
    switch(opcao){
        case 1:{
            double soma = (a + b);
            printf("A soma de %.2lf + %.2lf é de: %.2lf\n", a, b, soma);
            break;
        }
        case 2:{
            double subtracao = (a - b);
            printf("A subtração de %.2lf - %.2lf é de: %.2lf\n", a, b, subtracao);
            break;
        }
        case 3:{
            double multiplicacao = (a * b);
            printf("A multiplicação de %.2lf * %.2lf é de: %.2lf\n", a, b, multiplicacao);
            break;
        }
        case 4:{
            if(b != 0){
                double divisao = (a / b);
                double resto = fmod(a, b);
                printf("A divisão de %.2lf / %.2lf é de: %.0lf\n", a, b, divisao);
                printf("E o resto da divisão de %.2lf e %.2lf é de: %.0lf\n", a, b, resto);
                break;
            }else{
                printf("Erro divisão com 0\n");
                break;
            }
        }
        default:{
            printf("opção incorreta!");
            break;
        }
    }
    return 0;
}