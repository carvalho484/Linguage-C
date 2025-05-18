/******************************************************************************
 Programa: Calculadora Simples
 Autor: Lucas Carvalho
 Data: 18/05/2025
 Descrição: Programa que realiza operações básicas de soma, subtração,
 multiplicação e divisão entre dois números fornecidos pelo usuário.
 Permite repetir operações até o usuário optar por encerrar.
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void)
{
    double i = 1;
    while(i != 0)
    {
        double a, b;
        int menu;
        printf("Digite um valor:\n");
        scanf("%lf", &a);
        printf("Digite um valor:\n");
        scanf("%lf", &b);
        
        printf("\n");
        printf("Calculadora\n");
        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("\n");
        scanf("%d", &menu);
        printf("\n");
        
        switch(menu){
            case 1:{
                double soma = (a + b);
                printf("A soma entre %.0lf e %.0lf: %.2lf\n", a, b, soma);
                break;
            }case 2:{
                double sub = (a - b);
                printf("A Subtração entre %.0lf e %.0lf: %.2lf\n", a, b, sub);
                break;
            }case 3:{
                double multi = (a * b);
                printf("A Multiplicação entre %.0lf e %.0lf: %.2lf\n", a, b, multi);
                break;
            }case 4:{
                if(b == 0){
                    printf("Erro: não se divide por 0\n");
                }else{
                    double divi = (a / b);
                    double resto = fmod(a, b);
                    printf("A Divisão entre %.0lf e %.0lf: %.2lf\n", a, b, divi);
                    printf("\nO resto da Divisão entre %.0lf e %.0lf: %.2lf\n", a, b, resto);
                    break;
                }
            }default:{
                printf("escolha entre 1 a 4");
                break;
            }
        }
       
       printf("\ndeseja encerrar o programa ? (0 para sim ou 1 para não):\n");
       scanf("%lf", &i);
       printf("\n");
    }
    
    printf("\nprograma encerrado!\n");
    return 0;
}