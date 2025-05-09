/******************************************************************************
O código desenvolvido tem como objetivo praticar o uso da estrutura de repetição while em linguagem C. 
Ele solicita ao usuário que digite um número entre 0 e 10. 
Caso o valor esteja fora desse intervalo, uma mensagem de erro é exibida. 
Se o valor for válido, o programa entra em um loop que vai do número informado até 10, 
verificando em cada passo se o número atual é par ou ímpar. 
Para isso, utiliza-se a função fmod da biblioteca math.h, 
que permite calcular o resto da divisão entre números do tipo double. 
Dentro do loop, o número é exibido junto com a indicação de "par" ou "ímpar", 
e é incrementado a cada repetição até que atinja 10, encerrando o programa.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main (void)
{
    double i;
    printf("escreva um numero entre 0 a 10: ");
    scanf("%lf", &i);
    
    if (i < 0 || i > 10) {
        printf("Valor incorreto");
    }else {
        while(i < 11) {
            if (fmod (i, 2.0) == 0) {
                printf("%.0lf par\n", i);
            }else {
                printf("%.0lf impar\n",i);
            }
            i++;
        }
    }
    return 0;
}